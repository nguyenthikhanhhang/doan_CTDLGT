#include <vector>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> freq(501, 0);

        // đếm số lần xuất hiện
        for (int x : nums) {
            freq[x]++;
        }

        // kiểm tra có số nào xuất hiện lẻ không
        for (int i = 0; i <= 500; i++) {
            if (freq[i] % 2 != 0) {
                return false;
            }
        }

        return true;
    }
};