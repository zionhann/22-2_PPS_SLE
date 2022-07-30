class Solution {
public:
    int getMaximumGenerated(int n) {
        vector <int> array;
        
        for(int i = 0 ; i <= n ; i++)
        {
            if(i == 0)
            {
                array.push_back(0);
                continue;
            }
            if(i == 1)
            {
                array.push_back(1);
                continue;
            }
            if(i % 2 == 0)
            {
                array.push_back(array[i / 2]);
                continue;
            }
            
            array.push_back(array[i / 2] + array[i / 2 + 1]);
        }
        
        sort(array.begin(), array.end());
        return array[array.size() - 1];
    }
};