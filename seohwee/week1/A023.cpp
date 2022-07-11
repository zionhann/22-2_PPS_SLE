class Solution {
public:
    int addDigits(int num) {
        
        while(num >= 10){
            int sum = 0;
            sum = num % 10;
            num = sum + num / 10;
        }
        return num;
    }
};
