class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector <string> answer;
        
        int start = -65536;
        int end = -65536;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(start == -65536)
                start = nums[i];
            
            end = nums[i];
            
            if(i < nums.size() - 1 && !(nums[i + 1] == nums[i] + 1))
            {
                if(start != end)
                {
                    answer.push_back(to_string(start) + "->" + to_string(end));
                    start = -65536;
                }
                else
                {
                    answer.push_back(to_string(start));
                    start = -65536;
                }
            }
            if(i == nums.size() - 1)
            {
                if(start != end)
                    answer.push_back(to_string(start) + "->" + to_string(end));
                else
                    answer.push_back(to_string(start));
            }
                
        }
        return answer;
    }
};