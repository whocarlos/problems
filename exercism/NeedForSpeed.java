class NeedForSpeed {
    private int speed;
    private int batteryDrain;

    private int distanceDriven = 0;
    private int battery = 100;
    NeedForSpeed(int speed, int batteryDrain) {
        this.speed = speed;
        this.batteryDrain = batteryDrain;
    }

    public int getSpeed() {
        return speed;
    }

    public int getCurrentBattery(){
        return battery;
    }

    public int getBatteryDrain() {
        return batteryDrain;
    }

    public void setBattery(int battery){
        this.battery = battery;
    }

    public void setDistanceDriven(int distance){
        this.distanceDriven = distance;
    }

    public boolean batteryDrained() {
        if(battery <= 0){
            return true;
        }

        return false;
    }

    public int distanceDriven() {
        return distanceDriven;
    }

    public void drive() {
        if(battery >=batteryDrain){
            distanceDriven += speed;
            this.battery -= batteryDrain;
        }
        
    }

    public static NeedForSpeed nitro() {
        return new NeedForSpeed(50,4);
    }
}

class RaceTrack {
    private int distance;
    RaceTrack(int distance) {
        this.distance = distance;
    }

    public boolean tryFinishTrack(NeedForSpeed car) {
        int batteryRequired = ((distance + car.getSpeed() - 1) / car.getSpeed()) * car.getBatteryDrain();

        if(car.getCurrentBattery() >= batteryRequired){
            car.setDistanceDriven(car.distanceDriven() + distance);
            car.setBattery(car.getCurrentBattery() - batteryRequired);
            return true;
        }

        return false;
    }
}
