class Solution {
public:
    string toLowerCase(string s) {
        string result = "";

        char curr;
        for(char c: s){
            curr = (char) tolower(c);
            result += curr;
        }

        return result;
    }
};
