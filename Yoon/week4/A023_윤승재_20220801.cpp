class Solution {
public:
    int addDigits(int num) {
        int sum ;
        while(1){
            sum = 0;
            while(1){
                sum += num%10;
                if(num / 10 > 0)
                num /=10;
                else break;
            }
            if(sum / 10 > 0){
                num = sum;
                continue;
            }
            else return sum;
        }
    }
};