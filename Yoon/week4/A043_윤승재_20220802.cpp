class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string a = "";
        int j = 0;
        char b;
        int count;
        while(1){
            count = 0;
            if(strs[0].length() == 0){
                return a;
            }
            if(strs[0].length()<j+1)return a;
            b = strs[0][j];
            for(int i = 0; i < n; i++){
                if(b == strs[i][j]){
                    count++;
                    continue;
                }
                else return a;
                
                
            }
            a += b;
            j++;
        }
        return a;
    }
};