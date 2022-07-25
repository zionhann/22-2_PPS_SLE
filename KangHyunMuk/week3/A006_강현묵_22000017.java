class Solution {
  boolean solution(String s) {
      boolean answer = false;
      char c;
      int p = 0, y = 0;

      // 문자 개수가 50보다 클 때 false
      if(s.length() > 50)
          answer = false; 

      else{
          // 문자 하나하나 알파벳인지 체크, p와 y 수 세기
          for(int i = 0; i < s.length(); i++){
              c = s.charAt(i);
              if(Character.isLetter(c) == false){
                  answer = false;
                  break;
              }
              if(c == 'p' || c == 'P')
                  p++;
              if(c == 'y' || c == 'Y')
                  y++;
          }
      }

      if(p == y)
          answer = true;
          
      return answer;
  }
}