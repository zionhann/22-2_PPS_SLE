import java.io.*;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        BigInteger[] fibo = new BigInteger[N+1];
        fibo[0] = BigInteger.valueOf(0);
        fibo[1] = BigInteger.valueOf(1);
        if(N>1)
            fibo[2] = BigInteger.valueOf(1);
        for(int i=3; i<=N; i++) {
            fibo[i] = fibo[i-1].add(fibo[i-2]);
        }
        bw.write(fibo[N].toString());
        bw.flush();
        bw.close();
        br.close();
    }

}