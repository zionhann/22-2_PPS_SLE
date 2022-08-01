import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        Queue<Integer> queue = new LinkedList<>();
        for(int i=1; i<=N; i++) {
            queue.add(i);
        }
        int ans = 0;
        if(queue.size()==2)
            ans = 2;
        if(queue.size()==1)
            ans = 1;
        while(queue.size()>2) {
            queue.remove();
            queue.add(queue.peek());
            ans = queue.peek();
            queue.remove();
        }
        bw.write(Integer.toString(ans));
        br.close();
        bw.flush();
        bw.close();
    }

}
