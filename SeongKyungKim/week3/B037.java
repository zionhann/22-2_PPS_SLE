import java.util.Scanner;

public class B037_김성경_20220721 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int note[] = new int[N];
		int b[] = new int[N];
		
		for(int i=0; i<N; i++) {
			note[i] = sc.nextInt();
		}
		
		int iB = 0, iN=0, count=0;
		while(iB <= b.length-1) {
			if(b[iB] != note[iN]) {
				b[iB] = note[iN];
				if(iB < b.length-1) {
					if(b[iB+1] == 0) b[iB+1]=1;
					else b[iB+1]=0;
				}
				if(iB < b.length-2) {
					if(b[iB+2] == 0) b[iB+2]=1;
					else b[iB+2]=0;
				}
				count++;
			}
			iB++;
			iN++;
		}
		
		System.out.println(count);
		sc.close();
	}

}
