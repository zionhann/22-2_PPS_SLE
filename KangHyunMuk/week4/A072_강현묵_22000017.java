class Solution {
  public int dayOfYear(String date) {
      int year = Integer.parseInt(date.substring(0,4));
      int month = Integer.parseInt(date.substring(5,7));
      int day = Integer.parseInt(date.substring(8));
      int[] month_day;
      if(year%4==0 && year%100==0 && year%400==0)
          month_day = new int[] {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
      else if(year%4==0 && year%100==0)
          month_day = new int[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
      else if(year%4==0)
          month_day = new int[] {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
      else
          month_day = new int[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
      
      int ans = 0;
      for(int i=0; i<month-1; i++) {
          ans += month_day[i];
      }
      ans += day;
      return ans;
  }
}
