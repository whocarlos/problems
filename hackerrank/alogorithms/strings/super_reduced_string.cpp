#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    string ans = s;
    string prev_ans = s;
    
    while(true){
        
        for(int i = 0; i < ans.size(); i++){
            if(i+1 < ans.size()){
                if(ans[i] == ans[i+1]){
                    ans.erase(i,2);
                }
            }
        }
        
        if(ans == prev_ans){
            break;
        }
        
        prev_ans = ans;
    }
    
    if(ans.size() == 0){
        return "Empty String";
    }
    
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
