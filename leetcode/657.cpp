class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;

        for(auto &letter : moves){
            if(letter == 'U'){
                y += 1;
            }else if(letter == 'D'){
                y -= 1;
            }else if(letter == 'R'){
                x += 1;
            }else{
                x -= 1;
            }
        }

        if(x == 0 && y == 0){
            return true;
        }

        return false;
    }
};
