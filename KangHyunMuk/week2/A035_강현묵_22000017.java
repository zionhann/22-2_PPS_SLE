
import java.io.*;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        double[] result = new double[N];
        for(int i=0; i<N; i++) {
            String str = br.readLine();
            StringTokenizer st = new StringTokenizer(str);
            double num = Double.parseDouble(st.nextToken());
            while(st.hasMoreTokens()) {
                String tmp = st.nextToken();
                if(tmp.equals("@"))
                    num *=3;
                if(tmp.equals("%"))
                    num +=5;
                if(tmp.equals("#"))
                    num -=7;
            }
            result[i] = num;
        }

        for(int i=0; i<N; i++) {
            bw.write(String.format("%.2f", result[i])+ "\n");
        }

        bw.flush();
        br.close();
        bw.close();
    }
}
