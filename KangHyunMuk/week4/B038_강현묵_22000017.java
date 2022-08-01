import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();
        StringTokenizer st = new StringTokenizer(str);
        int N = Integer.parseInt(st.nextToken());
        int height = Integer.parseInt(st.nextToken());

        str = br.readLine();
        st = new StringTokenizer(str);
        int[] fruit = new int[N];
        int i=0;
        while(st.hasMoreTokens()) {
            fruit[i] = Integer.parseInt(st.nextToken());
            i++;
        }
        Arrays.sort(fruit);
        for(i = 0; i<N; i++) {
            if(height >= fruit[i]) {
                height++;
            } else break;
        }
        bw.write(Integer.toString(height));
        bw.flush();
        bw.close();
        br.close();
    }
}