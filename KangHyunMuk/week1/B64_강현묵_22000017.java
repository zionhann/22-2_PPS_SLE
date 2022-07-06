package com.baekjoon;

import java.io.*;
import java.util.*;
/*
*  1 2 3 5 7 9 10 11 12
* */
public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        List<Integer> list = new ArrayList<>();

        for(int i=0; i<N; i++) {
            int tmp = Integer.parseInt(st.nextToken());
            list.add(tmp);
        }
        if(list.size() == 1) {
            System.out.println("0");
            return;
        }

        Collections.sort(list);

        int X = Integer.parseInt(br.readLine());

        int count = 0;
        int start = 0, end = N - 1;
        int sum;

        while(start<end) {
            sum = list.get(start) + list.get(end);

            if(sum == X)
                count++;
            if(sum <= X)
                start++;
            else
                end--;
        }

        bw.write(Integer.toString(count));

        bw.flush();
        bw.close();
        br.close();
    }

}
