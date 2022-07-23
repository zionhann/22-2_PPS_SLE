import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;
import java.io.IOException;

public class Main {
	public static void main(String[] args) throws IOException {
		int[] num = new int[5];
		int lastNum = 0;
		
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		String s = bf.readLine();
		StringTokenizer st = new StringTokenizer(s);
		
		
		for(int i=0; i<5; i++) {
			num[i] = Integer.parseInt(st.nextToken());
		}
		
		for(int i=0; i<5; i++) {
			lastNum += Math.pow(num[i], 2);
		}
	    lastNum %=10;
	    
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		bw.write(String.valueOf(lastNum)); 
		bw.flush();
		bw.close();
		
	}	

}
