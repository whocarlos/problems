#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string line;
    while(t--){

        for(int i = 0; i < 3; i++){
            cin >> line;

            bool a = false;
            bool b = false;
            bool c = false;

            for(char item : line){
                if(item == 'A') a = true;
                if(item == 'B') b = true;
                if(item == 'C') c = true;
            }

            char result = '#';
            if(a == false) result = 'A';
            if(b == false) result = 'B';
            if(c == false) result = 'C';

            if(result == '#') {
                continue;
            }else{
                cout << result << endl;
            }

            a = false;
            b = false;
            c = false;
        }

    }
}
