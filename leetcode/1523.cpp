class Solution {
public:
    int countOdds(int low, int high) {

        bool is_low_odd = low % 2 != 0;

        cout << is_low_odd << endl;

        if(is_low_odd == false){
            low += 1;
        }

        int count = 0;

        for(int i = low; i <= high; i += 2){
            count += 1;
        }

        return count;
    }
};
