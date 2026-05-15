#include <vector>
#include <queue>
#include <cmath>
using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;

        // đưa tất cả vào heap
        for (int x : gifts) {
            pq.push(x);
        }

        // thực hiện k lần
        while (k--) {
            int x = pq.top();
            pq.pop();

            int y = (int)sqrt(x); // floor(sqrt)
            pq.push(y);
        }

        long long sum = 0;

        // tính tổng
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
};