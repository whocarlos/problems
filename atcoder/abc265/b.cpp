#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int n, m;
    long long t;
    cin >> n >> m >> t;

    vector<int> rooms(n-1);

    for(int i = 0; i < n-1; i++){
        cin >> rooms[i];
    }

    map<int, int> bonuses;
    int x, y;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        bonuses[x] = y;
    }

    for(int i = 0; i < n-1; i++){
        if(bonuses.find(i+1) != bonuses.end()){
            t += bonuses[i+1];
        }

        if(t - rooms[i] <= 0){
            cout << "No" << endl;
            return 0;
        }else{
            t -= rooms[i];
        }
    }

    if(t <= 0){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}
