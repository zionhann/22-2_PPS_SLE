class Solution {
public:
    int countPrimes(int n) {
        vector<int>a(n+1, 0);

        if(n==0 or n==1) {
            return 0;
        }
        
        for(int i=2; i*i<=n; i++){
            if(a[i]==0){
                for(int j=i; j*i<=n; j++){
                    a[i*j]=1;
                }
            }
        }
        
        int result=0;
        
        for(int i=2; i<n; i++){
            if(a[i]==0){
                result++;
            }
        }
        return result;
    }
};
