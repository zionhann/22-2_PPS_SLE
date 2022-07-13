#include <string>
#include <vector>
#include <list>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    list <char> check;
    
    for(int i = 0 ; i < skill_trees.size() ; i++)
    {
        for(int j = 0 ; j < skill_trees[i].length() ; j++)
        {
            for(int k = 0 ; k < skill.length() ; k++)
            {
                if(skill[k] == skill_trees[i][j])
                {
                    check.push_back(skill[k]);
                    break;
                }
            }
        }
        int j = 0;
        while(1)
        {
            if(check.empty())
            {
                answer++;
                break;
            }
            else if(skill[j] != check.front())
                break;
            else
                check.pop_front();

            j++;
        }
        check.clear();
    }
    
    return answer;
}