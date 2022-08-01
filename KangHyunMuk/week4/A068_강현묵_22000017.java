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
        Queue<Integer> que = new LinkedList<>();
        int back=-1;
        for(int i=0; i<N; i++) {
            String str = br.readLine();
            if(str.contains("push")){
                StringTokenizer st = new StringTokenizer(str);
                st.nextToken();
                back = Integer.parseInt(st.nextToken());
                que.add(back);
            }
            if(str.contains("front"))
                if(!que.isEmpty())
                    bw.write(Integer.toString(que.peek()) + "\n");
                else
                    bw.write("-1" + "\n");
            if(str.contains("back"))
                bw.write(Integer.toString(back) + "\n");
            if(str.contains("size"))
                bw.write(Integer.toString(que.size()) + "\n");
            if(str.contains("empty"))
                if(!que.isEmpty())
                    bw.write("0" + "\n");
                else
                    bw.write("1" + "\n");
            if(str.contains("pop"))
                if(que.isEmpty())
                    bw.write("-1" + "\n");
                else {
                    bw.write(Integer.toString(que.peek()) + "\n");
                    que.remove();
                    if(que.isEmpty())
                        back = -1;
                }
        }
        br.close();
        bw.flush();
        bw.close();
    }

}
