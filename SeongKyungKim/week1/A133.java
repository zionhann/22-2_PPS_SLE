import java.util.StringTokenizer;

class Solution {
    public String capitalizeTitle(String title) {
        title = title.toLowerCase();
		String result = "";
		
		StringTokenizer st = new StringTokenizer(title);
		
		while(st.hasMoreTokens()) {
			String token = st.nextToken();
			if(token.length() < 3) {
				result += token + " ";
			}
			else {
				result += token.substring(0,1).toUpperCase();
				result += token.substring(1) + " ";
			}
		}
		
		result = result.substring(0, result.length()-1);
        return result;
        
    }
}
