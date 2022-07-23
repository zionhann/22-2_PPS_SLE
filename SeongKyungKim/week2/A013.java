class Solution {
    public int singleNumber(int[] nums) {
        int number=0;
        HashMap<Integer,Integer> maps = new HashMap<>();
        
        for(int i=0; i<nums.length; i++){
            if(maps.containsKey(nums[i])) maps.put(nums[i], 2);
            else maps.put(nums[i],1);
        }
   
        for(Integer i : maps.keySet()){
            if(maps.get(i)==1){
                number = i;
                break;
            }
        }
        return number;
    }
}
