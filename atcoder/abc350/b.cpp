#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;

    int t;
    unordered_set<int> tracker;

    for(int i = 0; i < q; i++){
        cin >> t;
        if(tracker.count(t)){
            n += 1;
            tracker.erase(t);
        }else{
            n -= 1;
            tracker.insert(t);
        }
    }
    cout << n << endl;
    return 0;
}
