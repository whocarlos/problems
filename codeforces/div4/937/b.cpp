#include <bits/stdc++.h>
#include <cmath>
#include <string>


using namespace std;

int main() {

    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;

        char c = '#';
        char prev = '#';
        for(int i = 1; i <= (2*n); i++){

            if(i != 1){
                if(i % 2 == 0){
                    c = prev;
                }else{
                    //cout << i << " " << prev << endl;
                    prev = prev == '#' ? '.' : '#';
                   // cout << i << " " << prev << endl;
                    c = prev;
                }
            }

            for(int j = 1; j <= (2*n); j++){
                if(j != 1){
                    if(j % 2 != 0){
                        c = c == '#' ? '.' : '#';
                    }
                }

                cout << c;
            }

            cout << endl;
        }

        //cout << "----" << endl;
    }


    return 0;
}
