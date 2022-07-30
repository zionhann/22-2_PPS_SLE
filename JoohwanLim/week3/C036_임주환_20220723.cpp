#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> small(9,0);
    int sum = 0;
    int index1, index2;

    for(int i = 0 ; i < small.size() ; i++)
    {
        cin >> small[i];
        sum += small[i];
    }

    sum -= 100;
    
    index1 = 0;
    index2 = 0;
    for(int i = 0 ; i < small.size() ; i++)
        for(int j = i + 1 ; j < small.size() ; j++)
            if(small[i] + small[j] == sum)
            {
                index1 = i;
                index2 = j;
            }
    
    for(int i = 0 ; i < small.size() ; i++)
        if(i != index1 && i != index2)
            cout << small[i] << '\n';

    return 0;
}