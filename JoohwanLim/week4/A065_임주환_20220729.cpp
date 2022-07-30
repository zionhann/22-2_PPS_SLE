class Solution {
public:
    string removeDuplicates(string s) {
        vector <char> answer;
        string answerStr;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(answer.empty())
            {
                answer.push_back(s[i]);
                continue;
            }
            
            if(s[i] == answer.back())
                answer.pop_back();
            else
                answer.push_back(s[i]);
        }
        
        for(int i = 0 ; i < answer.size() ; i++)
            answerStr += answer[i];
        
        return answerStr;
    }
};