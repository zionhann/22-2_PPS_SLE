class Solution {
  public int addDigits(int num) {
      String str = Integer.toString(num);
      int result;
      
      while(true) {
          result = 0;
          for(int i=0; i<str.length(); i++) {
              result += num%10;
              num /= 10;
          }
          num = result;
          if(num<10)
              break;
      }
      
      return result;
  }
}