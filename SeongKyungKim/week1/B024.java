import java.util.*;

class Solution {
    public String[] findRelativeRanks(int[] score) {
        Map<Integer, Integer> map = new HashMap<>();
        String answer[] = new String[score.length];
        
        Integer[] score2 = new Integer[score.length];
        
        for(int i=0; i<score2.length; i++) {
            score2[i] = Integer.valueOf(score[i]);
        }
        
        for(int i=0; i<score.length; i++) {
            map.put(score2[i], i);
        }
        
        Arrays.sort(score2, Collections.reverseOrder());  //내림차순 정렬
        
    
        for(int i=0; i<score.length; i++) {
            if(i==0)  answer[map.get(score2[0])] = "Gold Medal";
            else if(i==1) answer[map.get(score2[1])] = "Silver Medal";
            else if(i==2) answer[map.get(score2[2])] = "Bronze Medal";
            else answer[map.get(score2[i])] = Integer.toString(i+1);
        }
        
        return answer;
        
    }
}
