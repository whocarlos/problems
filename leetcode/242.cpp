class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        map<char, int> tracker_s;
        map<char, int> tracker_t;

        for (int i = 0; i < s.size(); i++) {
            if (tracker_s.count(s[i]) == 0) {
                tracker_s[s[i]] = 1;
            } else {
                tracker_s[s[i]] += 1;
            }

            if (tracker_t.count(t[i]) == 0) {
                tracker_t[t[i]] = 1;
            } else {
                tracker_t[t[i]] += 1;
            }
        }

        

        bool result = true;

        for(const auto& pair : tracker_s){
            if(tracker_t[pair.first] != pair.second){
                result = false;
                break;
            }
        }


        return result;
    }
};
