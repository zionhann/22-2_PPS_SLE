/**
 * @author zionhann
 * @date 2022-07-06
 * @title 1710. Maximum Units on a Truck
 * @from https://leetcode.com/problems/maximum-units-on-a-truck/
 * @elapsed_time 36min
 */

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int max = 0;
        multimap<int, int, greater<int>> m;
        
        for (vector<int> box : boxTypes) {
            m.insert({box.at(1), box.at(0)});
        }
        
        for (auto box : m) {
            if (truckSize < box.second) {
                max += box.first * truckSize;
                return max;
            }
            max += box.first * box.second;
            truckSize -= box.second;
        }
        return max;
    }
};