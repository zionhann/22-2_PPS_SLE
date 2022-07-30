import java.util.Scanner;
import java.util.*;

public class B036_김성경_20220720 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
	    char cc[] = str.toCharArray();
	    List<Integer> nums = new ArrayList<>();
	    List<Character> operator = new ArrayList<>();
	    
	    String num="";
	    Character c;
	    for(int i=0; i<cc.length; i++) {
	    	c = cc[i];
	    	if(c!='+' && c!='-') num+=c;
	    	else {
	    		nums.add(Integer.parseInt(num));
	    		num = "";
	    		operator.add(c);
	    	}
	    }
	    nums.add(Integer.parseInt(num));
	    
	    int sum=0, count=0;
	    
	    for(int i=0; i<operator.size(); i++) {
	    	if(operator.get(i) == '-') {
	    		count ++;
	    		for(int j=0; j<=i; j++) {
	    			sum += nums.get(j);
	    		}
	    		for(int j=i+1; j<nums.size(); j++) {
	    			sum -= nums.get(j);
	    		}
	    		break;
	    	}
	    }
	    
	    if(count==0) {
	    	for(int i=0; i<nums.size(); i++) {
	    		sum += nums.get(i);
	    	}
	    }
	    System.out.println(sum);
	    sc.close();
	}

}
