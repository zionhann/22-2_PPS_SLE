
import java.io.*;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] score = new int[5];
        for(int i=0; i<5; i++) {
            String str = br.readLine();
            StringTokenizer st = new StringTokenizer(str);
            for(int j=0; j<4; j++) {
                score[i] += Integer.parseInt(st.nextToken());
            }
        }
        int max = 0, max_idx=0;
        for(int i=0; i<5; i++) {
            if(max<score[i]) {
                max = score[i];
                max_idx = i;
            }
        }
        bw.write(Integer.toString(max_idx+1) + " " + Integer.toString(max));

        bw.flush();
        br.close();
        bw.close();
    }
}
