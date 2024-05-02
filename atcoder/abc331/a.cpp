#include <bits/stdc++.h>
#include <cmath>
#include <string>


using namespace std;

int main() {
    int M,D, y,m,d;

    cin >> M >> D;
    cin >> y >> m >> d;

    if(d + 1 > D){
        d = 1;
    }else{
        d += 1;
    }

    if(d == 1){
        if(m+1 > M){
            m = 1;
        }else{
            m += 1;
        }
    }

    if(m == 1){
        y += 1;
    }

    cout << y << " " << m << " " << d << endl;
    return 0;
}
