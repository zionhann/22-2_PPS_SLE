class Solution {
public:
    bool isHappy(int n) {
        int tmp = 0;
        int power = 0;
        int answer = 0;
        int first;
        
        first = n;
        while(1)
        {
            answer = 0;
            while(n > 0)
            {
                tmp = 0;
                tmp = n % 10;
                n /= 10;
                power = tmp * tmp;

                answer += power;
            }
            n = answer;
            
            if(answer == 1)
                return true;
            if(answer == first || answer == 4)
                return false;
        }
    }
};