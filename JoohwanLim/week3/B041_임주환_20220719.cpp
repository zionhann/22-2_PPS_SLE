class Solution {
public:
    int maximum69Number (int num) {
        string str;
        int answer;
        
        str = to_string(num);
        
        for(int i = 0 ; i < str.length() ; i++)
        {
            if(str[i] == '6')
            {
                str[i] = '9';
                break;
            }
        }
        answer = stoi(str);
        return answer;
    }
};