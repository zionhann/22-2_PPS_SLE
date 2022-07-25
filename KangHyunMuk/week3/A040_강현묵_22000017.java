class Solution {
  public boolean halvesAreAlike(String s) {
          
      String front = s.substring(0, s.length()/2);
      String back = s.substring(s.length()/2);
      int countFront = 0, countBack=0;
      
      String[] vowel =  {"a", "e", "i", "o", "u", "A", "E", "I", "O", "U"};
      for(int i=0; i<10; i++) {
          //check front
          while(true) {
              if(front.contains(vowel[i])) {
                  countFront++;
                  front = front.replaceFirst(vowel[i], "");
              } else break;
          }
          while(true) {
              if(back.contains(vowel[i])) {
                  countBack++;
                  back = back.replaceFirst(vowel[i], "");
              } else break;
          }
      }
       return countFront == countBack; 
  }
}