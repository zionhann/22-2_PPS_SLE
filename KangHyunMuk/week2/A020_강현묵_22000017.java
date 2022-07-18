package com.baekjoon;

import java.io.*;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int max = 0;
        int total =0;
        for(int i=0; i<4; i++) {
            String str = br.readLine();
            StringTokenizer st= new StringTokenizer(str);
            int getOut = Integer.parseInt(st.nextToken());
            int getIn = Integer.parseInt(st.nextToken());
            total += getIn - getOut;
            if(total>max)
                max = total;
        }
        bw.write(Integer.toString(max));

        bw.flush();
        bw.close();
        br.close();
    }
}
