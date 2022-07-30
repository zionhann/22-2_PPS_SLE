import java.util.Scanner;

public class C023_김성경_20220724 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int M = sc.nextInt();
		int N = sc.nextInt();
		int blind[] = new int[5];
		
		String s;
		for(int i=0; i<M; i++) {
			s = sc.next();
			char[][] c = new char[4][];
			for(int j=0; j<4; j++) {
				s = sc.next();
				c[j] = s.toCharArray();
			}
			
			int dotCount, starCount;
			
			for(int k=0; k<N; k++) {
				dotCount=0;
				starCount=0;
				if(c[0][5*k+1]=='.') dotCount++;
				else starCount++;
				if(c[1][5*k+1]=='.') dotCount++;
				else starCount++;
				if(c[2][5*k+1]=='.') dotCount++;
				else starCount++;
				if(c[3][5*k+1]=='.') dotCount++;
				else starCount++;
				
				if(dotCount == 4) blind[0]++;
				else if(dotCount == 3) blind[1]++;
				else if(dotCount == 2) blind[2]++;
				else if(dotCount == 1) blind[3]++;
				else blind[4]++;
			}
		}
		
		for(int i=0; i<5; i++) {
			System.out.print(blind[i] + " ");
		}
	}

}
