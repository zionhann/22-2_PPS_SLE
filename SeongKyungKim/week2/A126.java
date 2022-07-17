import java.util.Scanner;

public class A126_김성경_20220717 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int count=0;
		
		if(N >= 10) {
			if(N >= 100) {
				count = cal(N, count);  // 세 자리수 이상일 때 
			}
			else count = N;  // 두 자리수일 때 
		}
		else count = N;   //한 자리수일 때  
		
		System.out.println(count);
		sc.close();
	}
	
	public static int cal(int num, int count) {
		if(num == 1000) num = 999;
		int[] nums = new int[3];
		int n, d;
		
		while(num >= 100) {
			n = num;
			for(int i=0; i<2; i++) {
				nums[i] = (int) (n / Math.pow(10, 2-i));
				n = (int) (n % Math.pow(10, 2-i));
			}
			nums[2] = n;
			
			d = nums[0] - nums[1];
			if(nums[1]-nums[2] == d) count++;
			num--;
			
		}
		
		count += 99;
		return count;
	}
}
