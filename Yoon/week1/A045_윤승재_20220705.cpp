#include <iostream>
#include <string>

using namespace std;

int main(){
    
    char word[1000001];
    char alpha[52];
    int count[26];
    int ms;
    int msnum;
    int on=1;
    cin>>word;    
    for(int i=0;i<26;i++){
        
        alpha[i]=i+'a';
        count[i]=0;
    }
    for(int i=26;i<52;i++){
        
        alpha[i]=i-26+'A';
    }
    for(int i=0;i<1000000;i++){
        if(word[i]=='\0')break;
        for(int j=0;j<26;j++){
            if(word[i]==alpha[j])
            count[j]++;
            
        }
        for(int j=26;j<52;j++){
            if(word[i]==alpha[j]){
                int c=j-26;
                count[c]++;                
            }
        }
    }
    ms=count[0];
    for(int i=0;i<26;i++){
        if(count[i]>=ms){
            ms=count[i];
            msnum=i;
        }
        
        
    }
    if(msnum==0){
        for(int i=1;i<26;i++){
            if(count[i]==ms){
                cout<<"?";
                on=0;
                break;
            }               
        }
    }
    else if(msnum==25){
        for(int i=0;i<25;i++){
            if(count[i]==ms){
                cout<<"?";
                on=0;
                break;
            }               
        }        
    }
    else{
        for(int i=0;i<msnum;i++){
            if(count[i]==ms){
                cout<<"?";
                on=0;
                break;
            }               
        }
        for(int i=msnum+1;i<26;i++){
            if(count[i]==ms){
                cout<<"?";
                on=0;
                break;
            }               
        }   
    }    
    if(on==1){
        msnum+=26;
        cout<<alpha[msnum];
    }    
    return 0;
}