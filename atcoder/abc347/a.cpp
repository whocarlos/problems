#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int item;

    for(int i = 0; i < n; i++){
        cin >> item;
        if(item % k == 0){
            cout << item / k << " ";
        }
    }

    cout << endl;
    return 0;
}
