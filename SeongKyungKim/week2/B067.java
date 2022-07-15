import java.util.StringTokenizer;

class Solution {
    public String reverseWords(String s) {
        StringTokenizer st = new StringTokenizer(s);
        int count = st.countTokens();
        String[] words = new String[count];
        String result = "";
        
        String str;
        for(int i=0; i<count; i++) {
            str = st.nextToken();
            StringBuffer sb = new StringBuffer(str);
            words[i] = sb.reverse().toString();
        }
        
        for(int i=0; i<count-1; i++) {
            result += words[i] + " ";
        }
        
        result += words[count-1];
        
        return result;
    }
}
