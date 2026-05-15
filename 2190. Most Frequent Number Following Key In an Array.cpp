#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> freq;

        // đếm số lần target xuất hiện sau key
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == key) {
                freq[nums[i + 1]]++;
            }
        }

        int ans = 0, maxCount = 0;

        // tìm target có tần suất lớn nhất
        for (auto &p : freq) {
            if (p.second > maxCount) {
                maxCount = p.second;
                ans = p.first;
            }
        }

        return ans;
    }
};