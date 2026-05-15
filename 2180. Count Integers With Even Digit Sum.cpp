#include <vector>
using namespace std;

class Solution {
public:
    int countEven(int num) {
        int count = 0;

        for (int i = 1; i <= num; i++) {
            int sum = 0, x = i;

            // tính tổng chữ số
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }

            if (sum % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};