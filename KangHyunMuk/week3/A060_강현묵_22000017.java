class Solution {
  public static int calPoints(String[] ops) {
      List<Integer> list = new ArrayList<>();
      for(String op: ops) {
          // 음수 체크 위함
          if(op.length()>1)
              list.add(Integer.parseInt(op));
          else if(Character.isDigit(op.charAt(0)))
              list.add(Integer.parseInt(op));
          else if(op.charAt(0)=='C')
              list.remove(list.size()-1);
          else if(op.charAt(0)=='D')
              list.add(list.get(list.size()-1) * 2);
          else if(op.charAt(0)=='+')
              list.add(list.get(list.size()-1) + list.get(list.size()-2));
      }
      int ans = 0;
      for(int num: list) {
          System.out.println(num);
          ans += num;
      }
      return ans;
  }
}