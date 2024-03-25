#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;

    int a_counter = 0;
    int b_counter = 0;
    for(int i = 0; i < t; i++){
        cin >> s;

        for(char letter : s){
            if(letter == 'A'){
                a_counter += 1;
            }else{
                b_counter += 1;
            }
        }

        if(a_counter > b_counter){
            cout << 'A' << endl;
        }else{
            cout << 'B' << endl;
        }

        a_counter = 0;
        b_counter = 0;
    }

}
