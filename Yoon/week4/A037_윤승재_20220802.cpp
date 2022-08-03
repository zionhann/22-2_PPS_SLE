class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int num;
        vector<int> v;
        int first;
        int second;
        int third;
        int fourth;
        for(int i = left; i <= right; i++){
            num = i;
            if(num/10 == 0){
                v.push_back(i);
            }
            else if(num/10 <10){
                first = num%10;
                num/=10;
                second = num%10;
                if(first!=0){
                    if(i%first == 0 && i%second == 0 )v.push_back(i);
                }
                

            }
            else if(num/10 <100){
                first = num%10;
                num/=10;
                second = num%10;
                num /=10;
                third = num%10;
                if(first!=0&&second!=0){
                    if(i%first == 0 && i%second == 0 && i%third == 0)v.push_back(i);
                }
                
            }
            else if(num/10 <1000){
                first = num%10;
                num/=10;
                second = num%10;
                num /=10;
                third = num%10;
                num/=10;
                fourth = num%10;
                if(first!=0&&second!=0&&third!=0){

                    if(i%first == 0 && i%second == 0 && i%third == 0 &&i%fourth == 0)v.push_back(i);
                }
            }
            
            
        }
        return v;
    }
};