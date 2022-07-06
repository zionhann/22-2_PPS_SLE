package com.baekjoon;

import java.io.IOException;
import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] dp = new int[N+1];

        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i=1; i<=N; i++) {
            dp[i] = Integer.parseInt(st.nextToken());
        }

        int left =0;

        for(int i=2; i<=N; i++) {

            boolean[] flag = new boolean[N+1];

            for(int j=1; j<i; j++) {
                left = i - j;
                if(flag[left] || flag[j])
                    continue;
                flag[left] = true;
                flag[j] = true;

                dp[i] = Math.max(dp[i-j] + dp[j], dp[i]);

            }
        }

        System.out.println(dp[N]);
        br.close();
    }
}
