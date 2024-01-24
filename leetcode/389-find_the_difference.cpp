class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        char result = ' ';

        for(int i = 0; i < t.size(); i++){

            if(i >= s.size()){
                result = t[i];
                break;
            }

            if(t[i] != s[i]){
                result = t[i];
                break;
            }

        }

        return result;
    }
};
