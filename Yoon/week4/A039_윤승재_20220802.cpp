class Solution {
public:
    bool isPerfectSquare(int num) {
        int x = num;
        for(long long i = 1; i <= x;i++ ){
            if(i * i == x){
                return true;
            }
            else if( i * i > x)break;
        }
        return false;
    }
};