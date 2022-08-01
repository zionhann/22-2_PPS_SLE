class Solution {
  public void merge(int[] nums1, int m, int[] nums2, int n) {
      int[] ans = new int[n+m];
      int idx =m;
      for(int i=0; i<n; i++) {
          nums1[idx] = nums2[i];
          idx++;
      }
      Arrays.sort(nums1);
      
  }
}