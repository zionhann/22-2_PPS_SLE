#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> score;

    int num;
    cin >> num;

    for(int i = 0 ;  i < num ; i++)
    {
        int stu;
        int tmpScore;
        int sum = 0;
        int up = 0;
        
        double average = 0.f;
        double percent = 0.f;

        cin >> stu;
        for(int j = 0 ; j < stu ; j++)
        {
            cin >> tmpScore;
            score.push_back(tmpScore);
            sum += tmpScore;
        }
        average = (double)sum / stu;

        for(int j = 0 ; j < stu ; j++)
            if(score[j] > average)
                up++;

        percent = 100 * ((double)up / stu);

        printf("%.3f%%\n", percent);

        score.clear();
    }
    return 0;
}