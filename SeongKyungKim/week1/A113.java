import java.util.Scanner;
import java.util.*;

public class A113_김성경_20220709 {
	public static LinkedList<Integer> adj[];
	public static boolean visited[];
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int M = sc.nextInt();
		
		adj = new LinkedList[N+1];
		
		for(int i=1; i<=N; i++) {
			adj[i] = new LinkedList();
		}
		
		int v,w;
		for(int i=0; i<M; i++) {
			v = sc.nextInt();
			w = sc.nextInt();
			adj[v].add(w);
			adj[w].add(v);
		}
		
		int connectNum = DFS(N);
		System.out.println(connectNum);
		sc.close();
		
		
	}
	
	public static int DFS(int N) {
		int count=0;
		boolean visited[] = new boolean[N+1];
		for(int i=1; i<=N; i++) {
			if(!visited[i]) {
				count++;
				dfs(visited, i);
			}
		}
		return count;
		
	}
	
	public static void dfs(boolean visited[], int v) {
		visited[v] = true;
		
		Iterator<Integer> adjNodes =  adj[v].listIterator();
		while(adjNodes.hasNext()) {
			int n = adjNodes.next();
			if(!visited[n]) {
				dfs(visited, n);
			}
		}	
	}

}
