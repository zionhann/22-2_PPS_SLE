class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
         vector<int> v(nums.size()+1);
         vector<int> answer;
        
         for(int i=0; i<nums.size();i++) v[nums[i]]++;
        
         for(int j=1; j<v.size(); j++){
             if(v[j] == 0) answer.push_back(j);
         }
         return answer;
    }
};
