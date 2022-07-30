import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;

public class C068_김성경_20220723 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int person[][] = new int[N][3];
		int result[] = new int[N];
		
		for(int i=0; i<N; i++) {
			person[i][0] = sc.nextInt();
			person[i][1] = sc.nextInt();
			person[i][2] = i;
		}
		
		Arrays.sort(person, new Comparator<int[]>() {

			@Override
			public int compare(int[] o1, int[] o2) {
				if(o1[0] == o2[0]) {
					return o1[1] - o2[1];
				}
				else return o1[0] - o2[0];
			}
		});
		
		for(int i=0; i<N; i++) {
			int count=0;
			for(int j=i+1; j<N; j++) {
				if((person[i][0] != person[j][0]) && (person[i][1] < person[j][1])) count++;
			}
			result[person[i][2]] = count+1;
		}
		
		for(int i=0; i<N; i++) {
			System.out.print(result[i] + " ");
		}
	}

}



