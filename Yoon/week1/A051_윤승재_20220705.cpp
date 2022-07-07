#include <iostream>
#include <string>

using namespace std;

int main() {
    string cap;
    int time = 0;
    getline(cin,cap);
    for(int i=0; i<cap.length();i++){
        if(cap[i] == 'A' ||cap[i] == 'B' ||cap[i] == 'C' ) time +=3;
        if(cap[i] == 'D' ||cap[i] == 'E' ||cap[i] == 'F' ) time +=4;
        if(cap[i] == 'G' ||cap[i] == 'H' ||cap[i] == 'I' ) time +=5;
        if(cap[i] == 'J' ||cap[i] == 'K' ||cap[i] == 'L' ) time +=6;
        if(cap[i] == 'M' ||cap[i] == 'N' ||cap[i] == 'O' ) time +=7;
        if(cap[i] == 'P' ||cap[i] == 'Q' ||cap[i] == 'R' ||cap[i] == 'S' ) time +=8;
        if(cap[i] == 'T' ||cap[i] == 'U' ||cap[i] == 'V' ) time +=9;
        if(cap[i] == 'W' ||cap[i] == 'X' ||cap[i] == 'Y' ||cap[i] == 'Z' ) time +=10;

    }
    
    
    
    /*int i = 0;//몇개받을지 모르는상황속에서 배열 구분하기위한 변수
    do{
        cin >> cap[i++];



        
    }while(getc(stdin)==' ');

    for (i = 0;i < 15;i++){
        if(cap[i] == "0" ) break;
        if(cap[i] == "A" ||cap[i] == "B" ||cap[i] == "C" ) time +=3;
        if(cap[i] == "D" ||cap[i] == "E" ||cap[i] == "F" ) time +=4;
        if(cap[i] == "G" ||cap[i] == "H" ||cap[i] == "I" ) time +=5;
        if(cap[i] == "J" ||cap[i] == "K" ||cap[i] == "L" ) time +=6;
        if(cap[i] == "M" ||cap[i] == "N" ||cap[i] == "O" ) time +=7;
        if(cap[i] == "P" ||cap[i] == "Q" ||cap[i] == "R" ||cap[i] == "S" ) time +=8;
        if(cap[i] == "T" ||cap[i] == "U" ||cap[i] == "V" ) time +=9;
        if(cap[i] == "W" ||cap[i] == "X" ||cap[i] == "Y" ||cap[i] == "Z" ) time +=10;
    }*/
    //c++은 신기하구나..
    cout << time;
    
}