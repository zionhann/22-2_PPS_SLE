import java.io.*;
import java.util.StringTokenizer;

public class Main{
	public static void main(String args[]) throws IOException {
		int caseNum;
		double num;
		String operator;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw= new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st;
		
		caseNum = Integer.parseInt(br.readLine());
		
		for(int i=0; i<caseNum; i++) {
			st = new StringTokenizer(br.readLine());
			num = Double.parseDouble(st.nextToken());
			
			while(st.hasMoreTokens()) {
				operator = st.nextToken();
				if(operator.equals("@")) {
					num *=3;
				}
				else if(operator.equals("%")) {
					num+=5;
				}
				else {
					num-=7;
				}
			}
			bw.write(String.format("%.2f",num));
			bw.write("\n");
		}
		bw.flush();
		bw.close();		
	}

}
