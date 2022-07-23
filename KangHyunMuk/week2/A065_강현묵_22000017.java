package com.baekjoon;

import java.io.*;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class Main {

    static class Pair {
        int x, y;
        Pair(int x, int y){
            this.x = x;
            this.y = y;
        }
    }

    static class CustomComparator implements Comparator<Pair> {
        @Override
        public int compare(Pair o1, Pair o2) {
            if(o1.x<o2.x)
                return -1;
            else if(o1.x>o2.x)
                return 1;
            else {
                return Integer.compare(o1.y, o2.y);
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        Pair[] list = new Pair[N];
        for(int i=0; i<N;i++) {
            String str = br.readLine();
            StringTokenizer st = new StringTokenizer(str);
            Pair xy = new Pair(Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken()));
            list[i] = xy;
        }

        Arrays.sort(list, new CustomComparator());

        for(Pair xy: list) {
            bw.write(Integer.toString(xy.x) + " " + Integer.toString(xy.y)+"\n");
        }
        bw.flush();
        bw.close();
        br.close();
    }
}
