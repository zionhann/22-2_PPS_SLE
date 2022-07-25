class Solution {
  public int findContentChildren(int[] g, int[] s) {
      int output = 0;
      Arrays.sort(g);
      Arrays.sort(s);
      
      for(int i=0; i<s.length; i++) {
          for(int j=0; j<g.length; j++) {
              if(g[j]==-1) continue;
              if( g[j] > s[i] ) continue;
              if( g[j] <= s[i] ) { g[j] = -1; 
                  output++;
                  break;
              }
          }
      }
      return output;
  }
}

/*
  아빠가 자식들 쿠키를 나눠줘야하는데 자식 한명당 최대 한개 줘야함
  근데 자식이 만족하는 쿠키 사이즈가 있음 
  쿠키는 각 쿠키마다 사이즈가 다름
  그래서 쿠키 사이즈가 만족하는 사이즈보다 클 경우 매칭을 해줌
  최대한 몇명이나 쿠키를 받을 수 있을지 알아보는 알고리즘
  MAX = 3* 10^4
  자식이 만족하는 쿠키 사이즈와 실제 쿠키 사이즈를 정렬한 다음
  실제 쿠키 첫 원소를 자식이 만족하는 쿠키 첫 원소와 비교해본다. 
  1) 만약 만족하는 쿠키사이즈가 더 클 경우 다음 쿠키 사이즈로 넘어간다.
  2) 만약 만족하는 쿠키사이즈가 더 작을 경우 매칭을 시켜준 후 output++ 한 후 넘어간다.
*/