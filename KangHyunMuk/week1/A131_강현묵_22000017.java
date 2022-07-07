package com.baekjoon;

import java.util.*;
import java.io.*;

/*
* -2 1 2 3 8
* */

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        int[] frq = new int[8001];
        int tot = 0;
        int max = Integer.MIN_VALUE, min = Integer.MAX_VALUE;

        for(int i=0; i<N; i++) {
            int tmp = Integer.parseInt(br.readLine());
            tot += tmp;
            arr[i] = tmp;
            if(tmp >= 0)
                frq[tmp]++;
            else
                frq[-tmp+4000]++;

            if(max < tmp)
                max = tmp;
            if(min > tmp)
                min = tmp;
        }

        System.out.println((int)Math.round( (double) tot/(double) N));

        Arrays.sort(arr);
        System.out.println(arr[N/2]);

        int range = max - min;

        max = 0;
        int count =0 ;

        for(int i: frq){
            if(max<i)
                max = i;
        }

        boolean[] flag = new boolean[8001];
        List<Integer> list = new ArrayList<>();

        for(int i=0; i<=8000; i++) {
            if( frq[i] == max ) {
                max = frq[i];

                if(i>4000 && !flag[i])
                    list.add(-(i-4000)) ;
                else if(i<=4000 && !flag[i])
                    list.add(i);

                flag[i] = true;
            }
        }

        Collections.sort(list);

        if(list.size()>1)
            System.out.println(list.get(1));
        else
            System.out.println(list.get(0));

        System.out.println(range);
        br.close();
    }
}
