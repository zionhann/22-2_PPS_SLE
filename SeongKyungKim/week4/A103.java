import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class A103_김성경_20220726 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		String[] words = {"a"};
		String[] morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
		
		Set<String> set = new HashSet<>();
		
		for(int i=0; i<words.length; i++) {
			char[] c = words[i].toCharArray();
			String code= "";
			for(int j=0; j<c.length; j++) {
				code += morse[c[j]-'a'];
			}
			set.add(code);
		}
		
		System.out.println(set.size());
	}

}
