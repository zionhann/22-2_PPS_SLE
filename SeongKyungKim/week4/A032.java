import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		int caseNum;
		int floor;
		int num;
		int peopleNum;
		Scanner sc = new Scanner(System.in);
		caseNum = sc.nextInt();
		
		for(int i=0; i<caseNum; i++) {
			floor = sc.nextInt();
			num = sc.nextInt();
			peopleNum = getPeopleNum(floor, num);
			System.out.println(peopleNum);
		}
		
		sc.close();
	}
	
	public static int getPeopleNum(int floor, int num)
	{
		int result=0;
		if(floor==0) {
			return num;
		}
		for(int i=1; i<=num; i++) {
			result += getPeopleNum(floor-1, i);
		}
		return result;
	}

}
