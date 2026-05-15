#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        // sắp xếp giảm dần
        sort(cost.begin(), cost.end(), greater<int>());

        int total = 0;
        int n = cost.size();

        for (int i = 0; i < n; i++) {
            // cứ mỗi 3 viên thì bỏ viên thứ 3
            if ((i + 1) % 3 != 0) {
                total += cost[i];
            }
        }

        return total;
    }
};