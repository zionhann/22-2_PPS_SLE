import java.util.Scanner;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Queue;

public class B049_김성경_20220716 {
	
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		LinkedList<Integer> adj[] = new LinkedList[N+1];
		
		for(int i=1; i<=N; i++) {
			adj[i] = new LinkedList<Integer>();
		}
		
		for(int i=0; i<N-1; i++) {
			int v = sc.nextInt();
			int w = sc.nextInt();
			adj[v].add(w);
			adj[w].add(v);
		}
		
		int [] parent = new int[N+1];
		
		BFS(adj, N, parent);
		
		for(int i=2; i<=N; i++) {
			System.out.println(parent[i]);
		}
		
		sc.close();
		
	}
	
	public static void BFS(LinkedList<Integer> adj[], int N, int[] parent) {
		boolean [] visited = new boolean[N+1];
		Queue<Integer> queue = new LinkedList<>();
		queue.add(1);
	    visited[1] = true;
		bfs(adj, visited, queue, parent);
		
	}
	
	public static void bfs(LinkedList<Integer> adj[], boolean[] visited, Queue<Integer> queue, int[] parent) {
		
		while(!queue.isEmpty()) {
			int v = queue.poll();
			Iterator<Integer> adjnodes = adj[v].listIterator();
			
			int w;
			while(adjnodes.hasNext()) {
				w = adjnodes.next();
				if(!visited[w]) {
					visited[w] = true;
					queue.add(w);
					parent[w] = v;
				}
			}
			bfs(adj, visited, queue, parent);
		}
		
	}

}
