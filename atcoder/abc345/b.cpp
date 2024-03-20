#include <iostream>

using namespace std;

int main()
{
    long long x;
    cin >> x;
    if(x == 0){
        cout << 0 << endl;
        return 0;
    }

    long long result = 0;

    long long remainder = x % 10;
   // cout << remainder << endl;
    if(remainder == 0){
        result = x / 10;
    }else{
        if(x > 0){
            result = (x/10)+1;
        }else{
            result = x / 10;
        }

    }

    cout << result << endl;
    return 0;
}
