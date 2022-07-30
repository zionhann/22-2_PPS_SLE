class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int bills5 = 0;
        int bills10 = 0;
        int bills20 = 0;
        for(int i = 0; i < bills.size(); i++) {
            if(bills[i] == 5) {
                bills5++;
            }
            else if(bills[i] == 10) {
                bills5--;
                bills10++;
            }
            else {
                if(bills10 > 0) {
                    bills10--;
                    bills5--;
                } else {
                    bills5 -= 3;
                    bills20++;
                }
            }
            if(bills5 < 0 || bills10 < 0) return false;
        }
        return true;
    }
};