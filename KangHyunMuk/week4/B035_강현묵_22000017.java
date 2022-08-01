import java.io.*;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();
        StringTokenizer st = new StringTokenizer(str);
        int N = Integer.parseInt(st.nextToken());
        int target = Integer.parseInt(st.nextToken());

        int[] nums = new int[N];
        for (int i = 0; i < N; i++) {
            nums[i] = Integer.parseInt(br.readLine());
        }
        int low = 0;
        int high = N-1;
        int mid;
        int index;
        int result = 0;
        while (target >0) {
            while (low <= high) {
                mid = (low + high) / 2;
                if (nums[mid] == target) {
                    index = mid;
                    break;
                } else if (nums[mid] > target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            if(low>=N)
                low -= 1;
            else if (nums[low] != target)
                low -= 1;
            int count = target / nums[low];
            result += count;
            target = target - count * nums[low];
        }
        bw.write(Integer.toString(result));
        bw.flush();
        bw.close();
        br.close();
    }
}