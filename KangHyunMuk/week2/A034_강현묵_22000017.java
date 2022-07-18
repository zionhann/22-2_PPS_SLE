import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        String str ="";
        int[] num = new int[42];
        for(int i=0; i<10; i++) {
            num[Integer.parseInt(str=br.readLine())%42]++;
        }
        int count=0;
        for(int i=0; i<42; i++) {
            if(num[i]>0)
                count++;
        }
        bw.write(Integer.toString(count));
        bw.flush();
        br.close();
        bw.close();
    }
}