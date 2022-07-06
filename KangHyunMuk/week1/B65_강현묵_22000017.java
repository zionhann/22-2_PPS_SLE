package com.baekjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int S = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int[] arr = new int[N];
        for(int i=0; i<N; i++)
            arr[i] = Integer.parseInt(st.nextToken());


        int sp = 0, ep = 0;
        int min = N;
        int p_total = 0 ;
        boolean flag = true;

        while(ep != N) {
            p_total += arr[ep];

            while(p_total>=S) {
                flag = false;
                min = Math.min(min, ep-sp+1);
                p_total -= arr[sp];
                sp++;
            }
            ep++;
        }

        if(flag) {
            System.out.println("0");
        }
        else
            System.out.println(min);

        br.close();
    }
}
