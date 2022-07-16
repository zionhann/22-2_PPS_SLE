class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> result;
        string str;
        for (int num = 1; num <= n; num++) {
            if (num % 3 == 0 && num % 5 == 0) str = "FizzBuzz";
            else if (num % 3 == 0) str = "Fizz";
            else if (num % 5 == 0) str = "Buzz";
            else str = to_string(num);
    
            result.push_back(str);
        }
        return result;
    }
};
