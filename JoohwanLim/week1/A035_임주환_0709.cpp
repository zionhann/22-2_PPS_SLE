#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int num;

    cin >> num;

    for(int i = 0 ; i < num ; i++)
    {
        double x;
        string oper;

        cin >> x;
        getline(cin, oper);

        for(int j = 0 ; j < oper.length() ; j++)
        {
            switch(oper[j])
            {
                case '@':
                    x *= 3;
                    break;
                
                case '%':
                    x += 5;
                    break;
                
                case '#':
                    x -= 7;
                    break;
                
                default:
                    break;
            }
        }
        printf("%.2f\n", x);
    }
    
    return 0;
}