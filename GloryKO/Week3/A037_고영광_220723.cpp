class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        int temp = 0, div = 0;
        for(int i = left; i <= right; i++) {
            temp = i;
            bool test = true;
            
            while(temp != 0) {
                temp % 10 == 0 ? div = 1 : div = temp % 10;
                if(temp % 10 == 0|| i % (div) != 0) {
                    test =false;
                    break;
                }
                temp /= 10;
            }
            if(test)answer.push_back(i);
        }
        
        return answer;
    }
};