#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;

        for (string w : words) {
            // kiểm tra prefix
            if (w.substr(0, pref.size()) == pref) {
                count++;
            }
        }

        return count;
    }
};
