#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {

        unordered_map<string,int> count1;
        unordered_map<string,int> count2;

        for(string w : words1)
            count1[w]++;

        for(string w : words2)
            count2[w]++;

        int ans = 0;

        for(auto &p : count1){
            if(p.second == 1 && count2[p.first] == 1)
                ans++;
        }

        return ans;
    }
};