class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;

        bool equal = false;

        int n_len = needle.size();
        int h_len = haystack.size();

        string sub;

        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[0] && (n_len - 1 + i) <= (h_len - 1)) {
                sub = haystack.substr(i,n_len);

                if(sub == needle){
                    index = i;
                    break;
                }
            }
        }

        return index;
    }
};
