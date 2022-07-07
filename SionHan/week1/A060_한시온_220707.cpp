/**
 * @author zionhann
 * @date 2022-07-07
 * @title 682. Baseball Game
 * @from https://leetcode.com/problems/baseball-game/
 * @elapsed_time 26min
 */

class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0;
        vector<int> scores;
        
        for (string op : ops) {
            try 
            {
                scores.push_back(stoi(op));
            } 
            catch (invalid_argument& e) 
            {
                char value = op.front();
                
                switch (value) {
                    case 'C':
                        scores.pop_back();
                        break;
                    case 'D':
                        scores.push_back(scores.back()*2);
                        break;
                    case '+': {
                        int before_last = scores.size() - 2;
                        int* pprev = scores.data() + before_last;
                        
                        scores.push_back(scores.back()+(*pprev));
                    }
                }
            }
        }
        for (int score : scores) {
            sum += score;
        }
        return sum;
    }
};