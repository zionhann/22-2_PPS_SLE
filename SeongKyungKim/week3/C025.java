import java.util.Scanner;

public class C025_김성경_20220724 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int left = sc.nextInt();
		int right = sc.nextInt();
		
		int[] count = new int[right-left+1];
		
	    boolean isBreak;
		for(int i=left; i<=right; i++) {
			for(int j=2; j<i; j++) {
				isBreak = false;
				if(i % j == 0) {
					if(i/j != j) count[i-left]+=2;
					else count[i-left]++;
					if(i/j <= j) {
						isBreak = true;
					}
					if(isBreak) break;
				}
				
			
			}
		}
		
		int result = 0;
		for(int i=0; i<count.length; i++) {
			if(count[i]%2 == 0) result = result + left+i;
			else result  = result - (left+i);
		}
		
		System.out.println(result);
		sc.close();
	}

}
