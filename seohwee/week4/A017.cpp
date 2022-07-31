#include <iostream> 
#include <algorithm> 

using namespace std; 

int main(void){
    int N; 
    int num[11]={0}; 
    string s; 
    int same;

    cin >> s; 
    for(int i=0; i<s.length(); i++) num[s[i]-48]++;

    same = (num[6]+num[9]+1) / 2;
    num[6] = num[9] = same;

    cout << *max_element(num, num+11);
}
