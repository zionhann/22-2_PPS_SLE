class Solution {
  public boolean isPalindrome(String s) {
      Stack<Character> stack = new Stack<>();
      for(int i=0; i<s.length(); i++) {
          if(Character.isLetter(s.charAt(i)) || Character.isDigit(s.charAt(i))){
              stack.push( Character.toLowerCase(s.charAt(i)) );
          }
      }
      int i=0;
      while(!stack.isEmpty()) {
          if(!Character.isLetter(s.charAt(i))) 
              if(!Character.isDigit(s.charAt(i))) {
                  i++;
                  continue;
              }
          char c = stack.peek();
          stack.pop();

          if(c != Character.toLowerCase(s.charAt(i)))
              return false;

          i++;
      }
      return true;
  }
}