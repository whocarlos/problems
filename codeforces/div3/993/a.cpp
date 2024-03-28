#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

   // cout << t << endl;
    int n,m, k;
    while(t--){
        cin >> n >> m >> k;

        int arr_n[n];
        for(int i = 0; i < n; i++){
            cin >> arr_n[i];
        }

        int arr_m[m];
        for(int i = 0; i < m; i++){
            cin >> arr_m[i];
        }


        int counter = 0;
        for(int i = 0; i < n; i++){
            int curr = arr_n[i];
            for(int j = 0; j < m; j++){
                if(curr + arr_m[j] <= k){
                    counter += 1;
                }
            }
        }

        cout << counter << endl;
    }
}
