#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    int i = 0, j = 0;
    stack <int> basket;
    
    for(int move = 0 ; move < moves.size() ; move++)
    {
        j = moves[move] - 1;
        while(i < board.size() && board[i][j] == 0)
            i++;
        if(i < board.size())
        {
            if(!basket.empty() && basket.top() == board[i][j])
            {
                basket.pop();
                answer += 2;
            }
            else
                basket.push(board[i][j]);

            board[i][j] = 0;
        }
        i = 0;
    }
    
    return answer;
}