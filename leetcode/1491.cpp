class Solution {
public:
    double average(vector<int>& salary) {
        int max = 999;
        int min = 1000001;

        for(int x: salary){
            if(x > max){
                max = x;
            }

            if(x < min){
                min = x;
            }
        }

        long sum = 0;
        for(int x: salary){
            if(x == min || x == max){
                continue;
            }

            sum += x;
        }

        double result = sum /static_cast<double> (salary.size() -2);

        return result;
    }
};
