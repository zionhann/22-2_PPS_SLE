import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

/*
문제 풀기 전 생각
end가 나올 때까지 반복하는 while문을 사용하고
boolean 변수를 사용해 acceptable을 판단하는 코드를 짜면 될 것 같다. 
boolean타입을 리턴하는 메소드를 만들자
1) a,e,i,o,u 체크 
2) 연속적인지 체크 , e와 o는 두번까지 허용 

부족한 점  
한 단어에서 연속적임을 체크하는 로직을 구현하는데 어려움
동적배열 활용을 잘 못함

해결책
Logic 익히기 
List 사용
*/
public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        List<String> passwords = new ArrayList<String>();
        Main m = new Main();
        String input ="";

        while(true) {
            input = br.readLine().trim();
            if(input.equals("end")) break;
            if(input.isEmpty()||input.length()>20) continue;
            passwords.add(input);
        }
        br.close();
        
        for(String password: passwords) {
            boolean decision = false;
            decision = m.acceptable(password);
            if(decision) System.out.println("<" + password + "> is acceptable.");
            else System.out.println("<" + password + "> is not acceptable.");
        }
    }

    private boolean acceptable(String password) {
        char spelling;
        int count = 0;
        int vowel = 0;
        int consonant = 0;

        for(int i=0; i< password.length(); i++) {
            spelling = password.charAt(i);
            if(spelling=='a'|| spelling=='e' || spelling=='i' || spelling=='o' || spelling=='u') {
                vowel++;
                consonant = 0;        
                count++;
            }
            else {
                vowel=0;
                consonant++;
            }
            if(vowel>2 || consonant>2) 
                return false;
        }

        if(count==0) return false;
        
        count = 0;
        for(int i=0; i<password.length()-1; i++) {
            
            if(password.charAt(i)==password.charAt(i+1)) {
                if(count==1) return false;
                if(password.charAt(i)!='e' && password.charAt(i)!='o') 
                    return false;
                count++;
            }
            
        }
        return true;
    }
}