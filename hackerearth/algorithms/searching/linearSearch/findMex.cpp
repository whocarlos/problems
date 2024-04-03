#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int num;
    int mex = 0;
    unordered_set<int> tracker;

    for(int i = 0; i < n; i++){
       cin >> num;
       tracker.insert(num);

       if(tracker.find(mex) != tracker.end()){
           while(tracker.find(mex) != tracker.end()){
               mex += 1;
           }
       }

       cout << mex << " ";
    }

    cout << endl;
    return 0;
}
