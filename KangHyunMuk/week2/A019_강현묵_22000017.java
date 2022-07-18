import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int[] num = new int[10];        
        int result = 1;
        for(int i=0; i<3; i++) {
            String str = br.readLine();
            result *= Integer.parseInt(str);
        }

        while(true) {
            if(result==0) break;
            num[result%10]++;
            result /=10;
        }

        for(int i=0; i<10; i++) {
            bw.write(Integer.toString(num[i])+ "\n");
        }
        bw.flush();
        br.close();
        bw.close();
    }
}
