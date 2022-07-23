/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int answer = 0;
        
        int idIndex;
        
        for(int i = 0 ; i < employees.size() ; i++)
        {
            if(employees[i]->id == id)
                idIndex = i;
        }
        answer = employees[idIndex]->importance;
        
        if(employees[idIndex]->subordinates.empty())
            return answer;
        else
        {
            for(int i = 0 ; i < employees[idIndex]->subordinates.size() ; i++)
            {
                answer += getImportance(employees, employees[idIndex]->subordinates[i]);
            }
        }
                                                  
        return answer;
    }
};