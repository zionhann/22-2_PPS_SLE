#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> v;

int main() {
	int num;
	cin >> num;
	int x, y;
	for (int i=0; i<num; i++) {
		cin >> x >> y;
		v.push_back({x, y});
	}
	sort(v.begin(), v.end());
    
	for (int i=0; i<num; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
}
