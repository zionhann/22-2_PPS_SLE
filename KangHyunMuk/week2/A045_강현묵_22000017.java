import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        String str = br.readLine().toLowerCase();
        ArrayList<String> list = new ArrayList<String>(); 
        for(int i=0; i<str.length(); i++) {
            list.add(Character.toString(str.charAt(i)));
        }
        Map<String,Integer> map = new HashMap<String, Integer>();
        int max = 0;
        for(String st: list) {
            Integer count = map.get(st);
            if(count == null) {
                map.put(st, 1);
            }
            else {
                map.put(st, count+1);
            }
            if(max < map.get(st))
                  max = map.get(st);
        }
        int check=0;
        String result="";
        for(String key: map.keySet()) {
            
            if(map.get(key)==max) {
                check++;
                result = key;
            }
        }
        if(check>1)
            System.out.println("?");
        else   
            System.out.println(result.toUpperCase());
        bw.flush();
        bw.close();
        br.close();
    }
    
}
