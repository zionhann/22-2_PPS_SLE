import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class C008_김성경_20220723 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		List<Character> list[] = new ArrayList[3];
		List<String> result = new ArrayList<>();
		
	
		list[0] = new ArrayList<>(Arrays.asList(new Character[] {'q','w','e','r','t','y','u','i','o','p'}));
		list[1] = new ArrayList<>(Arrays.asList(new Character[] {'a','s','d','f','g','h','j','k','l'}));
		list[2] = new ArrayList<>(Arrays.asList(new Character[] {'z','x','c','v','b','n','m'}));
		
		String[] words = {"adsdf","sfd"};
		
		boolean isSame;
		String str;
		for(int i=0; i<words.length; i++) {
			str = words[i].toLowerCase(); 
			char[] c = str.toCharArray();
			int index;
			isSame = true;
			
			if(list[0].contains(c[0])) index = 0;
			else if(list[1].contains(c[0])) index=1;
			else index=2;
			
			
			for(int j=1; j<c.length; j++) {
				if(!list[index].contains(c[j])) {
					isSame = false;
					break;
				}
			}
			if(isSame) result.add(words[i]);
			
		}
		
		
		for(String s : result) {
			System.out.println(s);
		}
		sc.close();
	}
	
}
