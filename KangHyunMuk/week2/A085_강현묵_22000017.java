import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        List<Serial> list = new ArrayList<Serial>();

        for(int i=0; i<N; i++) {
            list.add(new Serial(br.readLine()));
        }

        Collections.sort(list);
        for(Serial s: list) {
            bw.write(s.getSerial()+"\n");
        }
        bw.flush();
        br.close();
        bw.close();
    }

    static class Serial implements Comparable<Serial> {
        String serial;
        public Serial(String serial) {
            this.serial = serial;
        }
        public String getSerial() {
            return this.serial;
        }

        @Override
        public int compareTo(Serial s) {
            if(this.serial.length()< s.getSerial().length())
                return -1;
            else if(this.serial.length()> s.getSerial().length())
                return 1;
            else {
                return levelTwo(this.serial, s.getSerial());
            }
        }
    }
    public static int getNum(String serial) {
        int result=0;
        for(int i=0; i<serial.length(); i++) {
            if(!Character.isLetter(serial.charAt(i)))
                result += serial.charAt(i) - '0';
        }
        return result;
    }
    public static int levelTwo(String s1, String s2) {
        if(getNum(s1) > getNum(s2))
            return 1;
        else if(getNum(s1) < getNum(s2))
            return -1;
        return levelThree(s1, s2);
    }
    public static int levelThree(String s1, String s2) {
        for(int i=0; i<50; i++) {
           if(s1.charAt(i) < s2.charAt(i))
               return -1;
           else if(s1.charAt(i) > s2.charAt(i))
               return 1;
        }
        return 0;
    }

}
