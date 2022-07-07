package com.baekjoon;

import java.io.*;
import java.util.*;

/*
*   [ ( ( ) [ ) ] ]
* */

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String str;
        List<Boolean> list = new ArrayList<Boolean>();
        while(true) {
            str = br.readLine();
            if(str.charAt(0) == '.')
                break;
            list.add(balance(str));
        }

        for(boolean r: list)
            if(r)
                bw.write("yes\n");
            else
                bw.write("no\n");

        bw.flush();
        bw.close();
        br.close();
    }
    public static boolean balance(String str) {
        Stack<Character> s1 = new Stack<>();

        for(int i=0; i<str.length(); i++) {
            char tmp;

            if(str.charAt(i)== '.')
                break;
            if(str.charAt(i) == '(' || str.charAt(i) == '[') {
                s1.push(str.charAt(i));
            }
            else if(str.charAt(i) == ')') {
                if(s1.empty())
                    return false;
                if( (tmp = s1.pop()) != '(')
                    return false;
            }
            else if(str.charAt(i) == ']') {
                if(s1.empty())
                    return false;
                if((tmp = s1.pop()) != '[')
                    return false;
            }
        }
        return s1.size() == 0;
    }
}
