
public class A134_김성경_20220724 {
	public String reversePrefix(String word, char ch) {
        String reverse="";
		 int end_i = -1;
	     char[] words = word.toCharArray();
	     for(int i=0; i<words.length; i++) {
	    	 if(words[i]==ch) {
	    		 end_i = i;
	    		 break;
	    	 }
	     }
	    
	     if(end_i==-1) reverse += word;
	     
	     else {
	    	 for(int i=end_i; i>=0; i--) {
		    	 reverse += words[i];
		     }
	    	 for(int i=end_i+1; i<words.length; i++)
	    		 reverse += words[i];
	     }
	     return reverse;
    }

}
