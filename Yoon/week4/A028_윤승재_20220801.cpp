    #include <iostream>
    #include <vector>
    #include <string>
    using namespace std;

    int main(){
        vector <int> as;     
        vector <int> bs;     
        vector <int> cs;     
        string x,y;
        int i = 0;
        int count = 0;
        int max;
        cin >>x >> y;
        int checka;
        int checkb;
            
        while(1){
            checka = 0;
            checkb = 0;
            if(x.length()>0){
                as.push_back(stoi(x.substr(x.length()-1)));
                x = x.substr(0 , x.length()-1);
                checka = as[i];
            }
            if(y.length()>0){
                bs.push_back(stoi(y.substr(y.length()-1)));
                y = y.substr(0 , y.length()-1);
                checkb = bs[i];
            }
            
            
            
            cs.push_back(checka + checkb + count);
            if(cs[i] >= 10){
                cs.pop_back();
                cs.push_back(cs[i] % 10);
                count = 1;

            }else count = 0;
            // cout << as[i] << " " << bs[i] << " " <<cs[i] <<"\n";
            if(x.length() == 0 && y.length() == 0){
                if(count == 1){
                    i++;
                    cs.push_back(1);
                    max = i;
                    break;
                }
                max = i;
                break;
            
                
            }
            i++;
        }

        for(int k = max; k >= 0; k--){

            cout << cs[k];

        }
        
        
        
        
    }