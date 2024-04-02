#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;

    int sum = 0;
    for(char c : n){
        int num = c - '0';
        sum += num;
    }

    if(stoi(n) % sum != 0){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}
