#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (string s : sentences) {
            int count = 1; // mỗi câu có ít nhất 1 từ
            for (char c : s) {
                if (c == ' ') count++;
            }
            if (count > maxWords) {
                maxWords = count;
            }
        }

        return maxWords;
    }
};