class Solution {
  public int countPrimes(int n) {
      // 에라토스테네스의 체
      // boolean 배열 선언하고, 2 3 5 7 배수 모두 true, 나머지 모두 false 
      // false일 경우 count++; 
      // 처음 선언시 모두 false로 지정되어 있음
      boolean[] isNotPrime = new boolean[n];
      
      for(int i=2 ; i*i<n; i++) {
              // 처음의 2의 배수 모두 배재되고, 3의 배수 배재되면 
              // 자연스럽게 prime 수들의 배수들만 아래 for문을 지나게 되어 있음
              if(isNotPrime[i])
                  continue;
              for(int j=2; i*j<n; j++) {
                      isNotPrime[i*j] = true;
              }
      }
      int count=0;
      // 0과 1도 false로 포함되어 있으므로 배재
      for(int i=2; i<n; i++) {
          if(!isNotPrime[i])
              count++;
      }
      
      return count;
  }
}