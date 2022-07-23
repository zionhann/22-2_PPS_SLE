
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw= new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());
        List<Integer> list = new ArrayList<>();
        String str = br.readLine();
        StringTokenizer st= new StringTokenizer(str);

        for(int i=0; i<N; i++) {
            int num = Integer.parseInt(st.nextToken());
            if(!list.contains(num))
                list.add(num);
        }
        Collections.sort(list);

        for(int i=0; i<list.size(); i++) {
            bw.write(Integer.toString(list.get(i))+ " ");
        }
        bw.flush();
        bw.close();
        br.close();
    }
}
