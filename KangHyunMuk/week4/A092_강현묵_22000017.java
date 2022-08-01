class Solution {
  public int[] sortArrayByParityII(int[] nums) {
      
      int[] even = new int[nums.length/2];
      int[] odd = new int[nums.length/2];
      int i=0,j=0;
      for(int num: nums) {
          if(num%2==0){
              even[i] = num;
              i++;
          } else {
              odd[j] = num;
              j++;
          }
      }
      i=0;
      j=0;
      for(int k=0; k<nums.length; k++) {
          if(k%2==0)
              nums[k] = even[i++];
          else
              nums[k] = odd[j++];
      }
      
      return nums;
  }
}