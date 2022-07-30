class Solution {
  public boolean backspaceCompare(String s, String t) {
      
      Stack<Character> str1 = new Stack<>();
      Stack<Character> str2 = new Stack<>();
      
      for(int i=0; i<s.length(); i++){
          if(s.charAt(i)!='#')
              str1.push(s.charAt(i));
          else 
              if(!str1.empty())
                  str1.pop();
      }
      
      for(int i=0; i<t.length(); i++){
          if(t.charAt(i)!='#')
              str2.push(t.charAt(i));
          else
              if(!str2.empty())
                  str2.pop();
      }
      String ans1 = "";
      String ans2 = "";
      while(!str1.empty()) 
          ans1 += Character.toString(str1.pop());
      while(!str2.empty()) 
          ans2 += Character.toString(str2.pop());
      
      if(ans1.equals(ans2))
          return true;
      else
          return false;
  }
}