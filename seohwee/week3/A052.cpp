#include <iostream> 

using namespace std; 

int N; 
int main(void){
    cin >> N; 
    
    while(N--){ 
        int count=0;
        int total=0; 
        string str; 
        
        cin >> str; 
        
        for(int i=0; i<str.length(); i++) {
            if(str[i]=='O'){ 
                count++; 
                total+=count; 
            } 
            else count=0; 
        }
        cout << total << "\n"; 
    } 
}
