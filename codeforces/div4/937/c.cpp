#include <bits/stdc++.h>
#include <cmath>
#include <string>


using namespace std;

int main() {
    int t;
    cin >> t;

    string s;
    while(t--){
        cin >> s;
        string hour = s.substr(0,2);
        int h = stoi(hour);
        //cout << hour << " "<< h << endl;

        if(h == 0){
            h += 12;
            cout << h << s.substr(2) << " AM" <<  endl;
        }else if (h > 12){
           // cout << "Greater: " << s << " " << h << endl;
            h -= 12;
            string new_h = to_string(h);

            if(h < 10){
                new_h = '0'+new_h;
            }
            cout << new_h << s.substr(2) << " PM" << endl;
        }else{
            if(h == 12){
                cout << s << " PM" << endl;
            }else{
                cout << s << " AM" << endl;
            }
        }
    }


    return 0;
}
