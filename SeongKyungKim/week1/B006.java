import java.util.Scanner;
import java.util.*;

public class B006_김성경_20220709 {
	public static LinkedList<Integer> adj[];
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
	    int N = sc.nextInt();
	    int M = sc.nextInt();
	    int V = sc.nextInt();
	    adj = new LinkedList[N+1];
	    
	    for(int i=1; i<=N; i++) {
	    	adj[i] = new LinkedList();  // 이거안하면 adj[i] null 에러뜸
	    }
	    
	    int v=0,w;
	    for(int i=0; i<M; i++) {
	    	v = sc.nextInt();
	    	w = sc.nextInt();
	    	adj[v].add(w);
	    	adj[w].add(v);  // 양방향이라서 이것도 추가  
	    }
	    
	    for(int i=1; i<=N; i++) {
	    	Collections.sort(adj[i]);  // 정점번호가 작은 것부터 방문해야 돼서 linkedlist 정렬하기 Collections.sort()
	    }
	    DFS(N, V);
	    System.out.println();
	    BFS(N, V);
	    sc.close();
	    
	     
	}
	
	public static void DFS(int N, int V) {
		boolean visited[] = new boolean[N+1];
		dfs(visited, V);	
	}
	
	public static void dfs(boolean visited[], int v) {
		visited[v] = true;
		System.out.print(v + " ");
		
		Iterator<Integer> adjNodes = adj[v].listIterator();
		while(adjNodes.hasNext()) {
			int node = adjNodes.next();
			if(!visited[node]) dfs(visited, node);
		}
	}
	
	public static void BFS(int N, int V) {
		boolean visited[] = new boolean[N+1];
		Queue<Integer> queue = new LinkedList<>();
		queue.add(V);
		visited[V] = true;
		bfs(queue, visited);
	}
	
	public static void bfs(Queue<Integer> queue, boolean visited[]) {	
		while(!queue.isEmpty()) {
			int v = queue.poll();     //queue.poll하면 pop한거 return함 
			System.out.print(v + " ");
			
			Iterator<Integer> adjNodes = adj[v].listIterator();
			while(adjNodes.hasNext()) {
				int node = adjNodes.next();
				if(!visited[node])  {
					visited[node] = true;
					queue.add(node);
				}
			}
			bfs(queue, visited);
		}
		
	}
	
	

}
