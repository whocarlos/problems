#include <bits/stdc++.h>
#include <cmath>
#include <string>


using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b) {
            if (b < c) {
                cout << "STAIR" << endl;
            } else if (b > c) {
                cout << "PEAK" << endl;
            } else {
                cout << "NONE" << endl;
            }
        } else {
            cout << "NONE" << endl;
        }
    }


    return 0;
}
