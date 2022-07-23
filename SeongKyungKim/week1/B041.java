class Solution {
    public int maximum69Number (int num) {
        String number = Integer.toString(num);
		char[] n = number.toCharArray();
		
		for(int i=0; i<n.length; i++) {
			if(n[i] == '6') {
				n[i] = '9';
				break;
			}
		}
		
	    String resultStr = "";
		for(int i=0; i<n.length; i++) {
			resultStr += n[i];
		}
		
		int result = Integer.parseInt(resultStr);
        return result;
    }
}
