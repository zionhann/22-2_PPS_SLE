#include <iostream>
using namespace std;
int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
int main(){
    int t;
    cin >> t;
    int a,b;
    int ans;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        ans = lcm(a,b);
        cout << ans << "\n";
    }

}