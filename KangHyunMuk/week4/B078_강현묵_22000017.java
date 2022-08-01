class Solution {
  public int getMaximumGenerated(int n) {
      int[] fibo = new int[n+1];
      fibo[0] = 0;
      if(n>0)
          fibo[1] = 1;
      if(n>1)
          fibo[2] = 1;
      for(int i=1; 2*i+1<=n; i++) {
          fibo[2 * i] = fibo[i];
          fibo[2*i + 1] = fibo[i+1] + fibo[i];
      }
      int max=0;
      for(int f: fibo) {
          if(f>max)
              max = f;
      }
      return max;
  }
}