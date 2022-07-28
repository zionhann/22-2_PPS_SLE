class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector <int> answer;
        
        for(int i = left ; i <= right ; i++)
        {
            int tmp;
            tmp = i;
            bool SDN = true;
            
            if(i < 10)
            {
                answer.push_back(i);
                continue;
            }
            
            while(tmp > 0)
            {
                int divider;
                divider = tmp % 10;
                
                
                if(divider == 0 || i % divider != 0)
                {
                    SDN = false;
                    break;
                }
                tmp /= 10;
            }
            if(SDN == true)
                answer.push_back(i);
        }
        
        return answer;
    }
};