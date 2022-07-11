import java.util.*;

class Solution {
    public int findLucky(int[] arr) {
        Set<Integer> set = new HashSet<>();
        Map<Integer, Integer> map = new HashMap<>();
        int largestNum=0, luckyCount=0;
        
        int n;
        for(int i=0; i<arr.length; i++) {
            n = arr[i];
            if(!set.contains(n)) {
                set.add(n);
                map.put(n, 1);
            }
            else map.put(n, map.get(n)+1);
        }
        
        for(int num: set) {
            if(num == map.get(num)) {
                luckyCount++;
                if(num > largestNum) largestNum = num;
            }
        }
        
        if(luckyCount==0) return -1;
        else return largestNum;
    }
}
