import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;

public class C009_김성경_20220725 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String s  = sc.next();
		char[] c = s.toCharArray();
		Map<Character, Integer> map = new HashMap<>();
		int count=0;
		
		for(int i=0; i<c.length; i++) {
			if(!map.containsKey(c[i])) map.put(c[i], 1);
			else map.put(c[i], map.get(c[i])+1);
		}
		
		boolean useOdd = false;
		int n;
		for(Character i: map.keySet()) {
			n = map.get(i);
			if(n%2==0) count+=n;
			else if(n > 2 && n%2!=0) count += (n-1);
			else if(!useOdd) {
				count++;
				useOdd = true;
			}
		}
		
		System.out.println(count);
	}

}
