import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		int[] station = new int[4]; 
		int plus;
		int minus;
		int max=0;
		
		Scanner sc = new Scanner(System.in);

		for(int i=0; i<4; i++) {
			minus = sc.nextInt();
			plus = sc.nextInt();
			if(i==0) station[i] = station[i]-minus+plus;
			else station[i] = station[i-1]-minus+plus;
		}
		
		for(int i=0; i<4; i++) {
			if(station[i]>max) max = station[i];
		}
		
		System.out.println(max);
		sc.close();
	}

}
