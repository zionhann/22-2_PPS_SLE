import java.io.*;
import java.util.StringTokenizer;

public class Main {

    private static final int N = 100000;
    static int[] stack = new int[N];
    static int top = 0;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int count = Integer.parseInt(br.readLine());
        for(int i=0; i<count; i++) {
            String str = br.readLine();
            if(str.contains("push")) {
                StringTokenizer st = new StringTokenizer(str);
                st.nextToken();
                push(Integer.parseInt(st.nextToken()));
            }

            if(str.contains("top")) {
                if(stack_empty())
                    bw.write("-1\n");
                else
                    bw.write(stack[top - 1] + "\n");
            }
            if(str.contains("size"))
                bw.write(top +"\n");

            if(str.contains("empty")){
                if(stack_empty())
                    bw.write("1" +"\n");
                else
                    bw.write("0"+"\n");
            }

            if(str.contains("pop"))
                bw.write(pop() +"\n");
        }


        bw.flush();
        bw.close();
        br.close();
    }

    static public void push(int a) {
        if(stack_full()){
            System.out.println("error!");
            return;
        }
        stack[top] = a;
        top++;
    }
    static public int pop(){
        if(stack_empty()) {
            return -1;
        }
        top--;
        return stack[top];
    }
    static public boolean stack_full() {
        return top >= N;
    }
    static public boolean stack_empty() {
        return top == 0;
    }

}