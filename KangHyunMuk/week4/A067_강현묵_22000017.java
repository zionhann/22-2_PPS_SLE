class Solution {
  public String removeDuplicates(String s) {
     /*  
      Boolean flag = true;
      String[] dup = {"aa","bb","cc","dd","ee","ff","gg","hh","ii","jj","kk","ll","nn","mm","oo","pp","qq","rr","ss","tt","uu","vv","ww","xx","yy","zz"};
      
      while(flag) {
          
          int count=0;
          for(int i=0; i<26; i++) {
              if( s.contains(dup[i]) ) {
                  s = s.replace(dup[i], "");
                  count++;
              }
              if(i==25 && count==0)
                  flag = false;
          }
      }
      return s;
      */
      
      Stack<Character> stack = new Stack<>();
      
      for(int i= s.length()-1; i>=0; i--) {
          if(!stack.isEmpty() && stack.peek() == s.charAt(i))
              stack.pop();
          else 
              stack.push(s.charAt(i));
      }
      
      StringBuilder sb = new StringBuilder();
      while(!stack.isEmpty()) {
          sb.append(stack.pop());
      }
      return sb.toString();
  }
}
