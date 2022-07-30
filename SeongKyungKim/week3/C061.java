import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class C061_김성경_20220722 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		char c[] = s.toCharArray();
		Set<String> set = new HashSet<>();
		
		String str;
		for(int i=0; i<c.length; i++) {
		    str="";
			for(int j=i; j<c.length; j++) {
				str += s.substring(j,j+1);
				if(!set.contains(str)) set.add(str);
			}
		}
		
		System.out.println(set.size());
		sc.close();
	}

}
