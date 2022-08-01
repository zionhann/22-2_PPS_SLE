import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        char[] dials = br.readLine().toCharArray();
        int time = 0;
        for(char c: dials) {
            time += 2;
            switch (c) {
                case 'W': case 'X': case 'Y': case'Z':
                    time ++;
                case 'T': case'U': case 'V':
                    time++;
                case 'P': case 'Q': case 'R': case'S':
                    time++;
                case 'M': case 'N': case'O':
                    time++;
                case 'J': case 'K': case'L':
                    time++;
                case 'G': case'H': case'I':
                    time++;
                case 'D': case'E': case'F':
                    time++;
                case 'A': case'B': case'C':
                    time++;
            }
        }
        bw.write(Integer.toString(time));
        bw.flush();
        bw.close();
        br.close();
    }


}