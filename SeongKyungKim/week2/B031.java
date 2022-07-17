import java.util.Scanner;
import java.lang.Math;

public class B031_김성경_20220713 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int N = sc.nextInt();
		
		int[] hz = new int[N];
		
		for(int i=0; i<N; i++) {
			hz[i] = sc.nextInt();
		}
		
		int start = A;
		int min= Math.abs(B-A);
		int count=0;
		boolean find = false;
		
		while(start != B) {
			find = false;
			for(int i=0; i<N; i++) {
				if(Math.abs(B-hz[i]) < min) {
					find = true;
					min = Math.abs(B-hz[i]);
					start = hz[i];
				}
			}
			if(find) count++;
			if(!find) break;
		}
		
		count += Math.abs(start-B);
		
		System.out.println(count);
		sc.close();
		
	}

}
