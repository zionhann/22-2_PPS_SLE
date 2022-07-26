#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int N, X, sp, ep, cnt ;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0) ;
    cin >> N ;
    vector<int> arr(N) ;
    
    for(int &it : arr)
        cin >> it ;
    cin>> X ;

    sort(arr.begin(), arr.end()) ;
    sp = 0 ;
    ep = arr.size() - 1 ;

    while(sp < ep)
    {
        int now = arr[sp] + arr[ep] ;
        if(now == X)
        {
            cnt++; sp++; ep--;
        }
        else if(now < X)
            sp++ ;
        else
            ep-- ;
    }

    cout << cnt ;
}