// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 1, right = n;

        while (left < right) {
            long mid = left + (right - left) / 2;

            if (isBadVersion(mid))
                right = mid;      // mid might be first bad
            else
                left = mid + 1;   // first bad is after mid
        }

        return left;
    }
};