class Solution {
public:
    string addBinary(string a, string b) {
        int up = 0;
        int in = 0;
        int i ;       
        int j ;
        vector<string> c;
        string s = "";
        int count = 0; 
        string ca = a;
        string cb = b;
        int ia;
        int ib;
        string sa;
        string sb;
        int k = 0;
        // while(1){
        //     if(stoi(ca)/10 > 0 )count++;
        //     else{
        //         count++;
        //         i = count;
        //         break;
        //     }
        //         ca = to_string(stoi(ca)/ 10);
        // }
        // count = 0;
        // while(1){
        //     if(stoi(cb)/10 > 0 )count++;
        //     else{
        //         count++;
        //         j = count;
        //         break;
        //     }
        //         cb = to_string(stoi(cb)/ 10);
        // }
        i = a.length();
        j = b.length();
        i--;
        j--;

        cout << i << " " << j << "\n";
        while(1){
            
   
            if(i <0&& j >=0){
                sb = b[j];
                ib = stoi(sb);
                if(ib + in >= 2){
                    c.push_back(to_string(ib + in - 2));
                    in = 1;
                    
                }
                
                else{
                    c.push_back(to_string(ib + in));
                    
                    in = 0;
                }
            }
            else if(j <0 && i>= 0){
                sa = a[i];
                ia = stoi(sa);
                if(ia+ in >= 2){
                    c.push_back(to_string(ia+ in - 2));
                    in = 1;

                }
                else{
                    c.push_back(to_string(ia+ in));
                    in = 0;
                }
            
            }
            
            else{
                sa = a[i];
                sb = b[j];
                ib = stoi(sb);
                ia = stoi(sa);
                if(ia+ ib + in >= 2){
                    c.push_back(to_string(ia+ ib + in - 2));
                    in = 1;

                }
                else{
                    ib = stoi(sb);
                    ia = stoi(sa);
                    c.push_back(to_string(ia+ ib + in));
                    in = 0;
                }
            }

            i--;
            j--;
            if(i<0 && j<0)break;
            k++;
            
        }
        if(in == 1){
            c.push_back("1");
        }
        for(int i = c.size() - 1; i >=0; i--){
            s += c[i];
        }
        
            
        return s;
    }
};