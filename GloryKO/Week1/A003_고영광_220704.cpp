class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int adder = 1 ;
        
        for(int i = digits.size() - 1 ; i >= 0 ; i--)
        {
            if(adder == 0) break ;
            
            if(digits[i] == 9)
            {
                digits[i] = 0 ; adder = 1 ;
            }
            else
            {
                digits[i]++ ; adder = 0 ;
            }
        }
        
        if(adder == 1) digits.insert(digits.begin(), 1) ;
        
        return digits ;
    }
};