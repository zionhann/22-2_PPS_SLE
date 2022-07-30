import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class C013_김성경_20220723 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int[] candyType = {6,6,6,6};
		Set<Integer> set = new HashSet<>();
		
		for(int i=0; i<candyType.length; i++) {
			set.add(candyType[i]);
		}
		
		int n = candyType.length/2;
		int count=0;
		for(int i=1; i<=set.size(); i++) {
			if(count+1 > n) break;
			else count = i;	
		}
		
		System.out.println(count);
		sc.close();
	}

}
