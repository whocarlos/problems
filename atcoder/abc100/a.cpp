#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int counter = 0;
    for(char c : s){
        if(c == '+'){
            counter += 1;
        }else{
            counter -= 1;
        }
    }
    
    cout << counter << endl;
    return 0;
}
