import java.io.BufferedReader;
import java.io.InputStreamReader;

/*
풀기 전 내 생각
플레이 가능한 선수의 수를 입력 받은 후, 선수 수만큼 성을 입력 받는다. 
int[27] array를 만들어서 a~z 사이의 성이 나올 경우 1 추가한다. 
5 이상인 index 성을 출력한다.

부족한 점
어떤 변수를 사용해야 하는지 잘 모름     array, arraylist, map, haspmap에 대한 공부가 필요함

영어 소문자를 어떻게 숫자 0~26으로 바꿔야하는지 잘 몰랐음 
해결책: 아스키코드가 a=97이므로 [alphabet-97] 
*/
public class Main {
    public static void main(String[] args) throws Exception {
        int[] count = new int[26];
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        for(int i=0; i<N; i++) {
            String player = br.readLine();
            char a = player.charAt(0);
            count[a-97]++;
        }
        boolean sign = false;
        for(int i=0; i<count.length; i++) {
            if(count[i]>=5) {
                sign = true;
                System.out.print((char)(i+97));
            }
        }
        if(!sign) System.out.print("PREDAJA");
    }
}
