import java.util.Scanner;
import java.util.Arrays;

public class C005_김성경_20220725 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String[] participant = {"mislav", "stanko", "mislav", "ana"};
		String[] completion = {"stanko", "ana", "mislav"};
	    String answer="";
        
        Arrays.sort(participant);
        Arrays.sort(completion);
        
        boolean isFind = false;
        for(int i=0; i<completion.length; i++) {
            if(!participant[i].equals(completion[i])) {
                answer = participant[i];
                isFind = true;
                break;
            }
        }
        if(!isFind) answer = participant[participant.length-1];
        
        System.out.println("answer: "+answer);
		    
	
	}

}
