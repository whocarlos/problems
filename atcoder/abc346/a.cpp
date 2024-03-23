#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        nums.push_back(num);
    }

    for(int i = 0; i < n-1; i++){
        cout << (nums[i] * nums[i+1]) << " ";
    }

    return 0;

}
