/*
    끝의 자리를 1 더해줘야 한다.
    만약 9라면 1, 0 으로 변환해서 배열에 들어가야 한다.
    배열은 크기가 정해져 있으므로 리스트를 사용한다.
    for문 사용하고 i는 list 사이즈부터 0까지 반복하도록 한다.
    그래서 list.index값마다 9인지 확인해준다.
    9일 경우 그 자리를 0으로 바꾸고 반복한다.
*/
import java.util.*;
import java.util.stream.Collectors;
class Solution {
    public int[] plusOne(int[] digits) {
        List<Integer> list = new ArrayList<Integer>();
        for(int num: digits){
            list.add(num);
        }
        for(int i=list.size()-1; i>=0; i--) {
            if(list.get(i)!=9) {
                list.set(i, list.get(i)+1);
                break;
            }
            else 
                list.set(i, 0);
        }
        if(list.get(0)==0){
            list.set(0,1);
            list.add(0);    
        }
        return list.stream().mapToInt(i->i).toArray();
    }
}