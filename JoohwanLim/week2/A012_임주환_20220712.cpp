class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        
        if(n == 0)
            return 0;
        
        vector <bool> prime(n, true);
        
        prime[0] = false;
        prime[1] = false;
        
        for(int i = 2 ; i < n ; i++)
        {
            if(prime[i] == true)
            {
                for(int j = 2 ; i * j < n ; j++)
                {
                    prime[i * j] = false;
                }
            }
        }
        
        for(int i = 0 ; i < n ; i++)
        {
            if(prime[i] == true)
                cnt++;
        }
        
        return cnt;
    }
};