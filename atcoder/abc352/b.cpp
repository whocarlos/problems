#include <bits/stdc++.h>
#include <cmath>
#include <string>


using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    int lastFound = 0;
    for(int i = 0; i < s.size(); i++){
        for(int j = lastFound; j < t.size(); j++){
            if(t[j] == s[i]){
                if(j > lastFound  || lastFound == 0){
                    cout << (j+1) << " ";
                    lastFound = j;
                    break;
                }
            }
        }
    }

    cout << endl;

    return 0;
}
