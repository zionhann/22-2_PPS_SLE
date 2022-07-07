package com.baekjoon;

import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        List<Integer> list = new ArrayList<Integer>();
        int N = Integer.parseInt(br.readLine());
        int num;
        for(int i=0; i<N; i++) {
            num = Integer.parseInt(br.readLine());
            if(num == 0 && list.size() >0) {
                list.remove(list.size() - 1);
                continue;
            }
            list.add(num);
        }

        int tot = 0;
        for(int n: list) {
            tot += n;
        }

        System.out.println(tot);

        br.close();
    }
}
