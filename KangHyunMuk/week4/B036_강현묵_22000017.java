import java.io.*;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();
        StringTokenizer st = new StringTokenizer(str, "-");
        int result = 0;
        int N = st.countTokens();
        for(int i=1; i<=N; i++) {
            String tmp = st.nextToken();
            StringTokenizer st2 = new StringTokenizer(tmp, "+");
            int num=0;
            while(st2.hasMoreTokens()){
                num += Integer.parseInt(st2.nextToken());
            }
            if(i == 1)
                result += num;
            else
                result -= num;
        }
        bw.write(Integer.toString(result));
        bw.flush();
        bw.close();
        br.close();
    }
}