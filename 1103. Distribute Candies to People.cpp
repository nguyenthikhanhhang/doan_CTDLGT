#include <vector>
using namespace std;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {

        vector<int> ans(num_people, 0);

        int give = 1;
        int i = 0;

        while (candies > 0) {

            int idx = i % num_people;

            int take = min(give, candies);

            ans[idx] += take;

            candies -= take;

            give++;
            i++;
        }

        return ans;
    }
};