#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());

        vector<int> res1, res2;

        // nums1 có nhưng nums2 không có
        for (int x : s1) {
            if (!s2.count(x)) {
                res1.push_back(x);
            }
        }

        // nums2 có nhưng nums1 không có
        for (int x : s2) {
            if (!s1.count(x)) {
                res2.push_back(x);
            }
        }

        return {res1, res2};
    }
};