import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
	    String num;
	    int setCount=1;
	    int[] count = new int[10];
	    int n;
	    
	    Scanner sc = new Scanner(System.in);
	    num = sc.nextLine();
	    char[] nums = num.toCharArray();
	    
	    for(int i=0; i<nums.length; i++) {
	    	n = nums[i]-48;
	    	count[n] ++;
	    	if(setCount < count[n]) {
	    		if(n==6) {
	    		   if(setCount > count[9]) {
	    			   count[9]++;
	    			   count[6]--;
	    		   }
	    		   else setCount++;
	    		}
	    		else if(n==9) {
	    		   if(setCount > count[6]) {
	    			   count[6]++;
	    			   count[9]--;
	    		   }
	    		   else setCount++;
		    	}
	    		else setCount++;
	    	}
	    }
	    System.out.println(setCount);
	    sc.close();
	}	
	
}
