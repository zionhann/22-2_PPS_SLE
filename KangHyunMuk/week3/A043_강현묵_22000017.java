class Solution {
  public String longestCommonPrefix(String[] strs) {
      
      // prefix: 어떤 단어의 앞에 붙어 새로운 단어가 되게 하는 말
      // indexOf 메소드는 검색하고자 하는 단어가 있을 경우 해당 인덱스를 출력
      // prefix는 항상 0에서 시작해야 하므로 indexOf값은 0이어야 함 
      StringBuilder prefix = new StringBuilder(strs[0]);

      for (int i = 1; i < strs.length; i++) {
          // prefix가 0이 아닌 이유는 flower 단어를 다음 단어에서 찾을 수 없기 때문
          // 끝자리를 제거하여 flow prefix를 찾아냄
          while (strs[i].indexOf(prefix.toString()) != 0) {
              prefix = prefix.deleteCharAt(prefix.length() -1);
          }
      }

      return prefix.toString();
  }
}