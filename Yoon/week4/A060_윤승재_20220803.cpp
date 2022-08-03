class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> a;

        int j =-1;
        // stringstream dd;
        for(int i = 0; i < ops.size(); i++){
            if(ops[i] == "+"){
                
                a.push_back(a[j]+a[j-1]);
                ++j;
            }
            else if(ops[i] == "C"){
                a.pop_back();
                --j;
            }
            else if(ops[i] == "D"){
                a.push_back(a[j]*2);
                ++j;
            }
            
            else{
                a.push_back(stoi(ops[i]));
            ++j;
    
            }
            
        }
        
        return accumulate(a.begin(),a.end(),0);
    }
};