#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int h,w;
    cin >> h >> w;

    vector<string> grid;
    string s;
    for(int i = 0; i < h; i++){
        cin >> s;
        grid.push_back(s);
    }

    int i = 0, j = 0;


    vector<vector<int>> vis(h, vector<int>(w, false));
    char curr;
    while(true){
        curr = grid[i][j];

        if(vis[i][j] == true){
            cout << -1 << endl;
            return 0;
        }

        vis[i][j] = true;

        if(curr == 'U'){
            if(i != 0){
                i -= 1;
            }else{
                break;
            }
        }

        if(curr == 'D'){
            if(i != h-1){
                i += 1;
            }else{
                break;
            }
        }

        if(curr == 'L'){
            if(j != 0){
                j -= 1;
            }else{
                break;
            }
        }

        if(curr == 'R'){
            if(j != w-1){
                j += 1;
            }else{
                break;
            }
        }

    }


    cout << i+1 << " " << j+1 << endl;
    return 0;
}
