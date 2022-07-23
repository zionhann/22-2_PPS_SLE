#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dfs(int start, vector<int> graph[], bool check[])
{
    static int answer = 0;
    
	check[start] = true;
    answer++;

	for(int i = 0 ; i < graph[start].size() ; i++)
    {
		int next = graph[start][i];

		if(check[next] == false)
			dfs(next, graph, check);
	}

    return answer - 1;
}

int main()
{

	int n, m, start;
	cin >> n >> m;

	vector<int> graph[n+1];

	bool check [n + 1];
	fill(check, check + n + 1, false);

	for(int i = 0 ; i < m ; i++)
    {
		int u, v;
		cin >> u >> v;

		graph[u - 1].push_back(v - 1);
		graph[v - 1].push_back(u - 1);
	}

	for(int i=1; i<=n; i++)
		sort(graph[i].begin(), graph[i].end());

    int answer;

	answer = dfs(0, graph, check);

    cout << answer << endl;

	return 0;
}