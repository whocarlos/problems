#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = "";

    for(int i = 0; i < s.size()-1; i++){
        result += s[i];
    }

    result += '4';

    cout << result << endl;

    return 0;
}
