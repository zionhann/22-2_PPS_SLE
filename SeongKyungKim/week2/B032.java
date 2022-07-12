import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;

public class B032_김성경_20220712 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		Integer[] tree = new Integer[N];
		Integer[] days = new Integer[N];
		
		for(int i=0; i<N; i++) {
			tree[i] = sc.nextInt();
		}
		
		Arrays.sort(tree, Collections.reverseOrder());
		
		for(int i=0; i<N; i++) {
			days[i] = i+1+tree[i];
		}
		
		Arrays.sort(days, Collections.reverseOrder());
		System.out.println(days[0]+1);
		sc.close();
		
	}

}
