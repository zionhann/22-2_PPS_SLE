/**
 * @author zionhann
 * @date 2022-07-12
 * @title 2129. Capitalize the Title
 * @from https://leetcode.com/problems/capitalize-the-title/
 * @elapsed_time 45+min
 */

class Solution {
public:
    string capitalizeTitle(string title) {
        int counter = 0;
        auto cap = title.begin();
        
        for (auto iter = title.begin(); iter != title.end(); ++iter) {
            if (*iter == ' ') {
                if (counter > 2) {
                    *cap = toupper(*cap);   
                }
                counter = 0;
                cap = next(iter);
                continue;
            }
            *iter = tolower(*iter);
            counter += 1;
        }
        
        if (counter > 2) {
            *cap = toupper(*cap);
        }
        return title;
    }
};