import java.util.Scanner;
import java.util.Arrays;

public class B038_김성경_20220709 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int N, L;
		N = sc.nextInt();
		L = sc.nextInt();
		int[] fruit = new int[N];
		
		for(int i=0; i<N; i++) {
			fruit[i] = sc.nextInt();		
		}
		
		Arrays.sort(fruit);
		
		for(int i=0; i<N; i++) {
			if(fruit[i] <= L) L ++;
			else break;
		}
		
		System.out.println(L);
		sc.close();
	}

}
