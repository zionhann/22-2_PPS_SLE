#include <string>
#include <algorithm>
using namespace std;

string solution(string number, int k) {
    string arr = "";
    arr.push_back(number[0]);
    int idx = 0;
    for(int i = 1; i < number.length(); i++) {
        if(idx == k) {
            arr.push_back(number[i]);
            continue;
        }
        if(arr.back() < number[i]) {
            arr.pop_back();
            if(!arr.empty() && arr.back() < number[i])i--;
            else arr.push_back(number[i]);
            idx++;
        } 
        else {
            arr.push_back(number[i]);
        }
    }
    for(int i = 0; i < arr.length(); i++)
        if(arr.length() > number.length() - k) arr.pop_back();
    
    return arr;
}