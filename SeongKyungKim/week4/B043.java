import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class B043_김성경_20220726 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		boolean result = isHappy(n);
		System.out.println(result);
		
		
	}
	
	public static boolean isHappy(int n) {
        boolean result;
        Set<Integer> set = new HashSet<>();
		
		int sum;
        
		while(!set.contains(n)) {
			set.add(n);
			sum = 0;
			while(n != 0) {
				sum += Math.pow(n%10, 2);
				n = n/10;
			}
			n = sum;
		}
		
		if(n == 1) result = true;
		else result = false;
		return result;
        
    }

}
