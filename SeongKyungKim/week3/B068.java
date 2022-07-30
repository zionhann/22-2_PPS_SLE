class Solution {
    public boolean isSubsequence(String s, String t) {
        char cs[] = s.toCharArray();
		char ct[] = t.toCharArray();
		boolean result = true;
		
		char c;
		int index=0;
		boolean isFind;
		for(int i=0; i<cs.length; i++) {
			c = cs[i];
			isFind = false;
			for(int j=index; j<ct.length; j++) {
				index++;
				if(ct[j] == c) {
					isFind = true;
					break;
				}
			}
			if(!isFind) {
				result = false;
				break;
			}
		}
		return result;
    }
}
