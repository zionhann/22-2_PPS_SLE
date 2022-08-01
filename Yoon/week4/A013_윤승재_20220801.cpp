class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int arr[60001] = {0,};
        int max = -30000;
        int min = 30000;
        
        for(int i = 0; i < n; i++){
            if(nums[i] < min)min = nums[i];
            if(nums[i] > max)max = nums[i];

        }
        for(int i = 0; i < n; i++){
            arr[nums[i]-min]++;
            
        }
        for(int i = 0; i <= max - min; i++){
            if(arr[i] == 1)return i+min;
        }
        
        return 0;
    }
};