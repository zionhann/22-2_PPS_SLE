import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        String str = br.readLine();
        List<String> list = new ArrayList<String>(Arrays.asList("c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="));
        for(String code: list) {
            if(str.contains(code))
                str = str.replace(code, "!"); 
        }       
        bw.write(Integer.toString(str.length()));
        bw.flush();
        bw.close();
        br.close();
    }
    
}
