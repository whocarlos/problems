class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;

        int curr_sum = 0;

        for(int i = 0; i < accounts.size(); i++){
            for(int j = 0; j < accounts[0].size(); j++){
                curr_sum += accounts[i][j];
            }

            if(curr_sum > max){
                max = curr_sum;
            }

            curr_sum = 0;
        }

        return max;
    }
};
