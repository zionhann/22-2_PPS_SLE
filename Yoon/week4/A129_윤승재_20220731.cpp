#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1)      // n이 1일 때
        return 1;    // 1을 반환하고 재귀호출을 끝냄

    return n * factorial(n - 1);    // n과 factorial 함수에 n - 1을 넣어서 반환된 값을 곱함
}
int main(){
    int t;
    cin >> t;
    int num;
    int count;
    int one;
    int two;
    int three;
    int temp;
    for(int i = 0; i < t; i ++){
        cin >> num;
        count = 0;
        for(int j = 0; j < num; j++){
            two = j;
            if(two * 2 > num)break;
            for(int k = 0; k < num; k++){
                three = k;
                if(two * 2 + three*3 > num)break;
                one = num - 2*two - 3*three;

                temp = factorial(one + two + three);
                if(one !=0)temp /=factorial(one);
                if(two !=0)temp /=factorial(two);
                if(three !=0)temp /=factorial(three);
                count += temp;
            }

        }

        cout << count << "\n";
    }   

}