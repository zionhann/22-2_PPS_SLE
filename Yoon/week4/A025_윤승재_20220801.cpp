class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <0)return false;
        float k;
        k = n;
        for(int i = 0; i < 17; i++){
            if(k == 1)return true;
            else if(k < 1)k*=4;
            else{
                k /=4;
            }
            
        }
        return false;
        
    }
};