class Solution {
    public int findContentChildren(int[] g, int[] s) {
        int count=0;
        int k=0;
        Arrays.sort(g);
        Arrays.sort(s);
        for(int i=0; i<g.length; i++){
            for(int j=k; j<s.length; j++) {
                if(g[i] <= s[j]) {
                    count++;
                    k=j+1;
                    break; 
                }
                    
            }
        }
        return count;
    }
}
