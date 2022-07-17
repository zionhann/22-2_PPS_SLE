class Solution {
public:
    int countPrimes(int n) {
        bool arr[5000001];
        fill_n(arr, 5000001, 1);
        int count = 0;
        for(int i = 2; i < n; i++) {
            if(arr[i] == true) count++;
            else continue;
            for(int j = 2; i*j < n; j++) {
                arr[i*j] = false;
            }
        }
        
        return count;
    }
};