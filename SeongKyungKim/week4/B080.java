import java.util.Scanner;

public class B080_김성경_20220726 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] ans = countBits(n);
		for(int i=0; i<ans.length; i++) {
			System.out.print(ans[i] + " ");
		}
		sc.close();
		
	}
	
	public static int[] countBits(int n) {
	     int[] ans = new int[n+1];
	     String[] binary = new String[n+1];
	     
	     for(int i=0; i<binary.length; i++) {
	    	 binary[i] = Integer.toBinaryString(i);
	    	 char[] c = binary[i].toCharArray();
	    	 int count=0;
	    	 for(int j=0; j<c.length; j++) {
	    		 if(c[j]=='1') count++;
	    	 }
	    	 ans[i] = count;
	     }
	     
	     return ans;
	}

}
