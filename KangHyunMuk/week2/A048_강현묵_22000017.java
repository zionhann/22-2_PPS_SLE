import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int N = Integer.parseInt(br.readLine());
        List<String> list = new ArrayList<String>();
        for(int i=0; i<N; i++) {
            list.add(br.readLine());
        }       
        int count=0; 
        for(String word: list) {
            if(groupWord(word))
                count++;
        }
        bw.write(Integer.toString(count));

        bw.flush();
        bw.close();
        br.close();
    }
    private static boolean groupWord(String word) {
        List<Character> spelling = new ArrayList<Character>();
        int count=0;
        for(int i=0; i<word.length(); i++) {
            
            if(!spelling.contains(word.charAt(i))) {
                spelling.add(word.charAt(i));
                count++;
            }
            else if(spelling.indexOf(word.charAt(i))!= spelling.indexOf(spelling.get(count-1))) {
                return false;
            }
        }   
        return true;
    }
}   