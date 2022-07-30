class Solution {
    public int numPrimeArrangements(int n) {
        int primeCount = 0;
        boolean isPrime[] = new boolean[n+1];
        
        isPrime[1] = false;
        for(int i=2; i<=n; i++) {
        	isPrime[i] = true;
        }
        
        for(int i=2; i<=n; i++) {
            if(!isPrime[i]) continue;
            for(int j=2*i; j<=n; j+=i) {
                isPrime[j] = false;
            }
        }
        
        for(int i=1; i<=n; i++) {
            if(isPrime[i]) primeCount++;
        }
        
        long primePermu=1;
        long nonPrimePermu = 1;
        for(int i=1; i<=primeCount; i++) {
            primePermu  = (primePermu * i)%((long)Math.pow(10, 9)+ 7);
        }
        
        for(int i=1; i<=n-primeCount; i++) {
            nonPrimePermu = (nonPrimePermu * i)%((long)Math.pow(10, 9)+ 7);
        }
        
        long result = (primePermu * nonPrimePermu)%((long)Math.pow(10, 9)+ 7);
        return (int)result;
        
       
    }
}
