#include <bits/stdc++.h>
#include <cmath>
#include <string>


using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    vector<int> q(n);
    for(int i = 0; i < n; i++){
        cin >> q[i];
    }

    int counter = 0;
    int e_s = k;
    for(int a: q){
        if(e_s < a){
            counter += 1;
            e_s = k;
        }

        e_s -= a;
    }

    cout << counter+1 << endl;

    return 0;
}
