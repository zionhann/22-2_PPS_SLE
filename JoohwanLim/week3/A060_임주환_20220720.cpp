class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector <int> answer;
        int result = 0;
        
        for(int i = 0 ; i < ops.size() ; i++)
        {
            if(answer.size() >= 2 && ops[i] == "+")
                answer.push_back(answer[answer.size() - 2] + answer[answer.size() - 1]);
            else if(answer.size() >= 1 && ops[i] == "C")
                answer.pop_back();
            else if(answer.size() >= 1 && ops[i] == "D")
                answer.push_back(answer[(answer.size() - 1)] * 2);
            else
                answer.push_back(stoi(ops[i]));
        }
        
        for(int i = 0 ; i < answer.size() ; i++)
            result += answer[i];
        
        return result;
    }
};