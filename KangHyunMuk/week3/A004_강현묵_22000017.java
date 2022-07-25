import java.util.*;
import java.util.stream.Collectors;
class Solution {
    public int[] solution(int[] arr, int divisor) {
        List<Integer> list = new ArrayList<Integer>();
        for(int num: arr) {
            if(num%divisor==0) {
                list.add(num);
            }
        }
        if(list.size()==0)
            return new int[] {-1};
        
        Collections.sort(list);
        
        return list.stream().mapToInt(i->i).toArray();
    }
}
