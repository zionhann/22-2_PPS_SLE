
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        Map<Integer,Integer> nums = new TreeMap<>();
        for(int i=0; i<8; i++) {
            nums.put(i+1,Integer.parseInt(br.readLine()));
        }
        List<Map.Entry<Integer,Integer>> list = new ArrayList<>(nums.entrySet());
        list.sort(Map.Entry.comparingByValue());
        Collections.reverse(list);

        int count=0;
        int result=0;
        int[] index = new int[5];
        for(Map.Entry<Integer, Integer> idx: list) {
            result += idx.getValue();
            index[count] = idx.getKey();
            count++;
            if(count==5)
                break;
        }

        bw.write(Integer.toString(result)+"\n");
        Arrays.sort(index);
        for(int idx: index) {
           bw.write(Integer.toString(idx)+" ");
        }
        bw.flush();
        bw.close();
        br.close();
    }
}

