import java.util.Scanner;
import java.util.*;

public class B064 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
	    int n, x;
	    n = sc.nextInt();
	    
	    int[] nums = new int[n];
	    Map<Integer, Integer> map = new HashMap<>();
	    int count=0;
	    
		for(int i=0; i<n; i++) {
			nums[i] = sc.nextInt();
			map.put(nums[i], i);
		}
		
		x = sc.nextInt();
		for(int i=0; i<n; i++) {
			if(map.containsKey(x-nums[i]) && i < map.get(x-nums[i])) {
				count++;
			}
		}
		
		System.out.println(count);
		sc.close();
	}

}
