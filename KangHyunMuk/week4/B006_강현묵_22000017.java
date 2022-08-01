import java.io.*;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {

    static StringBuilder dfs = new StringBuilder();
    static StringBuilder bfs = new StringBuilder();
    static boolean[] visited;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String str = br.readLine();
        StringTokenizer st = new StringTokenizer(str);
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        int start = Integer.parseInt(st.nextToken());

        int[][] graph = new int[N+1][N+1];
        int[][] graph_tmp = new int[N+1][N+1];
        visited = new boolean[N+1];
        for(int i=0; i<K; i++) {
            str = br.readLine();
            st = new StringTokenizer(str);
            int first = Integer.parseInt(st.nextToken());
            int second = Integer.parseInt(st.nextToken());
            graph[first][second] = 1;
            graph[second][first] = 1;
            graph_tmp[first][second] = 1;
            graph_tmp[second][first] = 1;
        }
        DFS(start, graph, visited);
        /*for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++)
                if(!visited[i] && graph[i][j]==1)
                    DFS(i, graph, visited);
        }*/

        visited = new boolean[N+1];
        BFS(start, graph_tmp, visited);
        /*for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++)
                if(!visited[i] && graph[i][j]==1)
                    BFS(i, graph, visited);
        }*/
        bw.write(dfs.toString() + "\n" + bfs.toString());
        bw.flush();
        bw.close();
        br.close();
    }

    public static void DFS (int vertex, int[][]graph, boolean[] visited){
        if(visited[vertex])
            return;
        visited[vertex] = true;
        dfs.append(vertex).append(" ");
        for(int i=1; i<graph.length; i++) {
            if(!visited[i] && graph[vertex][i]==1) {
                graph[i][vertex] = 0;
                DFS(i, graph, visited);
            }
        }
    }
    public static void BFS(int vertex, int[][]graph, boolean[]visited) {

        Queue<Integer> q = new LinkedList<Integer>();

        q.offer(vertex);
        visited[vertex] = true;
        while(!q.isEmpty()) {
            int nodeIndex = q.poll();
            bfs.append(nodeIndex).append(" ");

            for(int i=1; i<graph.length; i++) {
                if(!visited[i] && graph[nodeIndex][i]==1) {
                    graph[i][nodeIndex] = 0;
                    visited[i] = true;
                    q.offer(i);
                }
            }
        }
    }
}
