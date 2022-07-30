import java.util.Scanner;
import java.util.*;

public class C015_김성경_20220724 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		String[] emails = {"a@leetcode.com","b@leetcode.com","c@leetcode.com"};
		Set<String> set = new HashSet<>();
		
		for(int i=0; i<emails.length; i++) {
			String s[] = emails[i].split("@");
			String local = s[0];
			String domain = s[1];
			
			char c[] = local.toCharArray();
			String resultL ="";
			
			for(int j=0; j<c.length; j++) {
				if(c[j]=='+') break;
				else if(c[j]!='.') resultL += c[j];
			}
			
			emails[i] = resultL + "@" + domain;
			set.add(emails[i]);
		}
		
		System.out.println(set.size());
		sc.close();
	}

}
