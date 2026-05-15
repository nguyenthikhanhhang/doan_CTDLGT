#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> arr;

        for (int i = 0; i < nums.size(); i += 2) {
            // Bob thêm trước
            arr.push_back(nums[i + 1]);
            // Alice thêm sau
            arr.push_back(nums[i]);
        }

        return arr;
    }
};