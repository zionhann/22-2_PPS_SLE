import java.util.Scanner;
import java.util.*;

public class A121_김성경_20220720 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int nums[] = {2,1};
		int result = findShortestSubArray(nums);
		System.out.println(result);
		sc.close();
	}
	
	
	public static int findShortestSubArray(int[] nums) {
        Map<Integer,Integer> map = new HashMap<>();
        List<Integer> maxNums = new ArrayList<>();
        
        int n,m, max=0; 
        for(int i=0; i<nums.length; i++) {
            n = nums[i];
            if(!map.containsKey(n)) {
                map.put(n, 1);
                if(max < 1) {
                	max = 1;
                }
            }
            else {
            	m = map.get(n);
                map.put(n, m+1);
                if(max < m+1) {
                    max = m+1;
                }
            }
        }
        
        for(Integer i : map.keySet()) {
            if(map.get(i) == max) {
            	maxNums.add(i);
            }
        }
        
        for(int i=0; i<maxNums.size(); i++) {
        	System.out.println(maxNums.get(i));
        }
        
        int index[][] = new int[maxNums.size()][2];
        int count[] = new int[maxNums.size()];
        
        int idx;
        for(int i=0; i<nums.length; i++) {
            if(maxNums.contains(nums[i])) {
                idx = maxNums.indexOf(nums[i]);
                if(max == 1) {
                	index[idx][0] = i;
                	index[idx][1] = i;
                }
                else {
                	if(count[idx] == 0) {
                    	index[idx][0] = i;
                    	count[idx]++;
                    }
                    else if(count[idx] < max-1) count[idx]++;
                    else index[idx][1] = i;
                }
             
             }
        }
        
        
        int min = 50000;
        for(int i=0; i<index.length; i++) {
        	System.out.println("i: "+ " index[i][0] " + index[i][0]+ " index[i][1] " + index[i][1]);
            if(index[i][1] - index[i][0] < min) min = index[i][1] - index[i][0];
        }
        System.out.println("min: " + min);
        return min+1;
    }
}
