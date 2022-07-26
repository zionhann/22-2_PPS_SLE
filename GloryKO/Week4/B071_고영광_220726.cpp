#include <iostream>
#include <vector>
#define MAX(a, b)((a) > (b) ? (a) : (b))
using namespace std ;
int N, X, sp, ep, cnt ;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0) ;
    cin >> N ;
    vector<int> arr(N) ;
    vector<int> dp(N+1) ;

    for(int &it : arr)
        cin >> it ;
    
    for(int i = 1 ; i <= N ; i++)
    {
        dp[i] = arr[i-1] ;
        for(int j = 1 ; j <= i ; j++)
            dp[i] = MAX(dp[i], dp[i - j] + dp[j]) ;
    }

    cout << dp[N] ;
}