class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result = digits;

        bool non_zero = false;

        for (int i = result.size() - 1; i >= 0; i--) {
            if (result[i] == 9) {

                result[i] = 0;

            } else {
                non_zero = true;
                result[i] += 1;
                break;
            }
        }

        if(non_zero == false){
            result.insert(result.begin(), 1);
        }

        return result;
    }
};
