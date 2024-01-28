class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        if (nums.size() == 1) {
            return true;
        }

        bool ascending = false;
        bool descending = false;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                continue;
            } else if (nums[i] > nums[i + 1]) {
                descending = true;
            } else {
                ascending = true;
            }
        }

        if(ascending && descending){
            return false;
        }

        return true;
    }
};
