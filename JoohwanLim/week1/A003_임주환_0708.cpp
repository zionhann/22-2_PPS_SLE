#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        
        for(int i = 0 ; i < digits.size() ; i++)
        {
            if(digits[i] != 9)
            {
                digits[i]++;
                break;
            }
            else if(i != digits.size() - 1)
                digits[i] = 0;
            else
            {
                digits[i] = 0;
                digits.push_back(1);
                break;
            }
        }
        
        reverse(digits.begin(), digits.end());
        
        return digits;
    }
};