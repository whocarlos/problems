public class ElonsToyCar {
    public static ElonsToyCar buy() {
        ElonsToyCar newCar = new ElonsToyCar();
        return newCar;
    }

    private int distanceDriven;
    public String distanceDisplay() {
        return "Driven " + distanceDriven + " meters";
    }

    private int battery = 100;
    public String batteryDisplay() {
        if(battery <= 0){
            return "Battery empty";
        }
        return "Battery at " + battery + "%";
    }

    public void drive() {
        if(battery <= 0){
            return;
        }
        distanceDriven += 20;
        battery -= 1;
    }
}
