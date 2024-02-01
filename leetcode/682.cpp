class Solution {
public:
    int calPoints(vector<string>& operations) {
        int result = 0;
        vector<int>scores;
        for(string operation: operations){
            int new_score = 0;
            if(operation == "+"){
                new_score = scores[scores.size()-1] + scores[scores.size()-2];
                scores.push_back(new_score);
            }else if(operation == "D"){
                new_score = scores[scores.size()-1] * 2;
                scores.push_back(new_score);
            }else if(operation == "C"){
                scores.pop_back();
            }else{
                scores.push_back(stoi(operation));
            }
        }


        for(int n:scores){
            result += n;
        }

        return result;
    }
};
