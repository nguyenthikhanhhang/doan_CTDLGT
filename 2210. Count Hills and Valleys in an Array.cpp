#include <vector>
using namespace std;

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> a;

        // loại bỏ phần tử trùng liên tiếp
        a.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                a.push_back(nums[i]);
            }
        }

        int count = 0;

        // đếm hill và valley
        for (int i = 1; i < a.size() - 1; i++) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                count++; // hill
            } else if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
                count++; // valley
            }
        }

        return count;
    }
};