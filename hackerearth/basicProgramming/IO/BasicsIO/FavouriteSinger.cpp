#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<long long, int> tracker;
    long long num;
    long long max = 0;
    for(int i = 0; i < n; i++){
        cin >> num;

        if(tracker.find(num) == tracker.end()){
            tracker[num] = 1;
        }else{
            tracker[num] += 1;
        }

        if(tracker[num] > max){
            max = tracker[num];
        }
    }

    cout << max << endl;
    return 0;
}
