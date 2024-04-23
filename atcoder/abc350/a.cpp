#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string num_s = s.substr(3);
    int num = stoi(num_s);

    if(num < 350){
        if(num != 316 && num >= 1){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
