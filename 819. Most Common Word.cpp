#include <string>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> count;

        // xử lý chữ thường và dấu câu
        for (char &c : paragraph) {
            if (isalpha(c))
                c = tolower(c);
            else
                c = ' ';
        }

        stringstream ss(paragraph);
        string word;
        string result;
        int maxCount = 0;

        while (ss >> word) {
            if (!ban.count(word)) {
                count[word]++;
                if (count[word] > maxCount) {
                    maxCount = count[word];
                    result = word;
                }
            }
        }

        return result;
    }
};