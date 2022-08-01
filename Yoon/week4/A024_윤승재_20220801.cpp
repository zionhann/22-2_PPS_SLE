class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fv=0;
        int te=0;
        int tw=0;
        int n = bills.size();
        for(int i = 0; i < n; i++){
            if(bills[i] == 5)fv++;
            
            if(bills[i] == 10){
                te++;
                if(fv == 0)return false;
                else fv--;
            }
            if(bills[i] == 20){
                tw++;
                if(5*fv + 10*te >=15){
                    if(te >= 1 && fv >=1){
                        te--;
                        fv --;
                    }
                    else if(fv >=3){
                        fv-=3;
                    }
                    else return false;
                }
                else return false;
            }
            
        }
        return true;
    }
};