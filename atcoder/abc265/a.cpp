#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int x, y, n;
    cin >> x >> y >> n;

    int n_t = n / 3;
    int n_o = n % 3;

    int ans_one = (n_t * y) + (n_o * x);
    int ans_two = x * n;

    int ans_final = ans_one < ans_two ? ans_one : ans_two;

    cout << ans_final << endl;

    return 0;


}
