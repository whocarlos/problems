#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    string s = "atcoder";
    for(int i = a-1; i < b; i++){
        cout << s[i];
    }

    cout << endl;
    return 0;
}
