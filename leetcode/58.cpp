class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == ' '){
                if(len > 0){
                    break;
                }
            }else{
                len += 1;
            }
        }

        return len;
    }
};
