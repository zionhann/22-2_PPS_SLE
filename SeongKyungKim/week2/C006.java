class Solution {
    public int firstUniqChar(String s) {
        char[] c = s.toCharArray();
        Set<Character> set = new HashSet<>();
        Map<Character, Integer> unique = new HashMap<>();
        
        for(int i=0; i<c.length; i++) {
            if(!set.contains(c[i])) { 
                set.add(c[i]);
                unique.put(c[i], i);
            }
            else { //set에 이미 들어가져 있으면 즉, 두개 이상일 때
                unique.remove(c[i]);
            }
        }
        
        int min=100000;
        int index=-2;
        
        if(unique.size() == 0) return -1;
        else {
            for(Character i : unique.keySet()) {
                if(unique.get(i) < min) {
                    min = unique.get(i);
                    index = unique.get(i);
                 }
             }
             return index;
        }
    }
}
