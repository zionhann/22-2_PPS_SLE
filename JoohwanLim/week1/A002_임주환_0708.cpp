#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> tri;
        
        for(int i = 1 ; i <= numRows ; i++)
        {
            for(int j = 0 ; j < i ; j++)
            {
                if(j == 0 || j == i - 1)
                    tri.push_back(1);
                else
                    tri.push_back(result[i - 2][j - 1] + result[i - 2][j]);
            }
            result.push_back(tri);
            tri.clear();
        }
        
        return result;
    }
};