class Solution {
  public static String removeOuterParentheses(String s) {

      Stack<Character> stack = new Stack<>();
      int count = 0;
      String answer = "";

      for(int i=0; i<s.length(); i++) {
          if( s.charAt(i)=='(' ) {
              stack.push('(');
              count++;
          }
          if( s.charAt(i)==')' ) {

              count--;

              if(count==0) {
                  String tmp = "";
                  while(!stack.empty())
                      tmp = String.valueOf(stack.pop()) + tmp;
                  tmp = tmp.substring(1);
                  answer += tmp;
              }
              else
                  stack.push(')');

          }
      }
      return answer;
  }
}