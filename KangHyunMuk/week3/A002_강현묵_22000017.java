class Solution {
  public List<List<Integer>> generate(int numRows) {
      
      //각 row에 담길 숫자 list를 담을 리스트 생성
      List<List<Integer>> pascal = new ArrayList<>();
      
      for(int i=0; i<numRows; i++) 
      {
          List<Integer> list = new ArrayList<>();
          for(int j=0; j<=i; j++) 
          {   
              //처음과 끝은 1이 들어간다. 
              if(j==0 || j==i) list.add(1);
              else 
                  // 파스칼 이전 row의 j-1번째 수와 이전 row의 j번째 수를 더한다. 
                  list.add( pascal.get(i-1).get(j-1) + pascal.get(i-1).get(j) );
           }
          pascal.add(list);
      }
      return pascal;
  }
}