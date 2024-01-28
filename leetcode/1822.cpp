class Solution {


public:

    int arraySign(vector<int>& nums) {

        int negative_counter = 0;

        for(int n:nums){

            if(n == 0){

                return 0;

            }

            

            if(n <0){

                negative_counter += 1;

            }

​

        }

        

        if(negative_counter % 2 == 0){

            return 1;

        }
       

        return -1;

    }

}
  
