class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        int check1;
        int check2;
        vector<string>s;
        string c1;          
        string c2;

        bool con = false;
        if(n != 1){
            for(int i = 0; i < n - 1; i++){
                if(nums[i] + 1 == nums[i + 1] &&con == false){
                    check1 = nums[i];
                    con = true;
                    if(i == n-2){
                        check2 = nums[i+1];
                        con = false;
                        c1 = to_string(check1);                
                        c2 = to_string(check2);

                        s.push_back(c1 + "->"+c2);
                        break;
                    }
                }
                else if(nums[i] + 1 == nums[i+1] && con == true){
                    if(i == n-2){
                        check2 = nums[i+1];
                        con = false;
                        c1 = to_string(check1);                
                        c2 = to_string(check2);

                        s.push_back(c1 + "->"+c2);
                    }

                }
                else if(nums[i] + 1 != nums[i+1] && con == true){
                    check2 = nums[i];
                    con = false;
                    c1 = to_string(check1);                
                    c2 = to_string(check2);

                    s.push_back(c1 + "->"+c2);
                    if(i == n-2){
                        c2 = to_string(nums[i+1]);

                        s.push_back(c2);
                    }

                }
                else if(nums[i] + 1 != nums[i+1] && con == false){

                    c1 = to_string(nums[i]);
                    s.push_back(c1);
                    if(i == n-2){
                        c2 = to_string(nums[i+1]);

                        s.push_back(c2);
                    }
                }


            }
            
            
        }
        else {
            c2 = to_string(nums[0]);

            s.push_back(c2);
        }
        return s;
    }
};