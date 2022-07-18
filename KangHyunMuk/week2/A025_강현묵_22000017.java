class Solution {
  public boolean isPowerOfFour(int n) {
      
      if(n<1) return false;
      if(n==1) return true;
      
      int result = 4;
      int i=1;
      if(n%2==1) return false;
      while(true) {
          result = (int) Math.pow(4,i);
          if(result == n)
              return true;
          if(result>n)
              return false;
          i++;
      }
  }
}