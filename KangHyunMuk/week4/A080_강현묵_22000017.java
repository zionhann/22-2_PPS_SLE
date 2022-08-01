class Solution {
  public int majorityElement(int[] nums) {
      HashMap<Integer, Integer> hashmap = new HashMap<>();
      for(int num: nums) {
          if(!hashmap.containsKey(num))
              hashmap.put(num, 1);
          else {
              int val = hashmap.get(num);
              val++;
              hashmap.put(num,val);
          }
      }
      List<Map.Entry<Integer,Integer>> entryList = new LinkedList<>(hashmap.entrySet());
      entryList.sort(Map.Entry.comparingByValue());
      return entryList.get(entryList.size()-1).getKey();
  }
}