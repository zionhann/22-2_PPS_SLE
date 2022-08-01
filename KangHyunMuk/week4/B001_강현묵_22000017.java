import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
    static int count=0;
    public static void main(String[] args) throws Exception {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        boolean[] visited = new boolean[N+1];

        int K = Integer.parseInt(br.readLine());
        int[][] graph = new int[N+1][N+1];
        for(int i=0; i<K; i++) {
            String str = br.readLine();
            StringTokenizer st = new StringTokenizer(str);
            int first =Integer.parseInt(st.nextToken());
            int second = Integer.parseInt(st.nextToken());
            graph[first][second] = 1;
            graph[second][first] = 1;
        }
        DFS(1, graph, visited);

        bw.write(Integer.toString(count));
        br.close();
        bw.flush();
        bw.close();
    }

    public static void DFS(int vertex, int[][] graph, boolean[] visited) {
        if(visited[vertex]){
            return;
        }
        if(vertex!=1)
            count++;
        visited[vertex] = true;
        for(int i=1; i<graph.length; i++) {
            if(!visited[i] && graph[vertex][i]==1) {
                graph[i][vertex] = 0;
                DFS(i, graph, visited);
            }
        }
    }
}
