class Solution {
public:
    int dayOfYear(string date) {
        string yearStr;
        string monthStr;
        string dayStr;
        int year;
        int month;
        int day;
        int answer = 0;
        
        yearStr = date.substr(0, 4);
        monthStr = date.substr(5, 2);
        dayStr = date.substr(8, 2);
        
        year = stoi(yearStr);
        month = stoi(monthStr);
        day = stoi(dayStr);
        
        if(month >= 1)
            answer += day;
        if(month >= 2)
            answer += 31;
        if(month >= 3)
        {
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                answer += 29;
            else
                answer += 28;
        }
        if(month >= 4)
            answer += 31;
        if(month >= 5)
            answer += 30;
        if(month >= 6)
            answer += 31;
        if(month >= 7)
            answer += 30;
        if(month >= 8)
            answer += 31;
        if(month >= 9)
            answer += 31;
        if(month >= 10)
            answer += 30;
        if(month >= 11)
            answer += 31;
        if(month >= 12)
            answer += 30;
        
        return answer;
    }
};