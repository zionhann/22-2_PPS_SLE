import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;

public class C007_김성경_20220725 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String s = "paper";
		String t = "title";
		
		char[] cs = s.toCharArray();
		char[] ct = t.toCharArray();
		int[] indexS = new int[cs.length];
		int[] indexT = new int[cs.length];
		
		Map<Character, Integer> smap = new HashMap<>();
		Map<Character, Integer> tmap = new HashMap<>();
		
		int index=0;
		for(int i=0; i<cs.length; i++) {
			if(!smap.containsKey(cs[i])) smap.put(cs[i], index);
			indexS[i] = smap.get(cs[i]);
			index++;
		}
		
		index = 0;
		for(int i=0; i<ct.length; i++) {
			if(!tmap.containsKey(ct[i])) tmap.put(ct[i], index);
			indexT[i] = tmap.get(ct[i]);
			index++;
		}
		
		boolean result = true;
		for(int i=0; i<indexS.length; i++) {
			if(indexS[i]!=indexT[i]) {
				result = false;
				break;
			}
		}
		System.out.println(result);
		
		
	}

}
