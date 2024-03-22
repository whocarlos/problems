#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = "";
    bool noCopy = false;
    for(char item : s){
        if(item == '|'){
            noCopy = !noCopy;
            continue;
        }

        if(noCopy == false){
            result += item;
        }
    }

    cout << result << endl;

    return 0;
}
