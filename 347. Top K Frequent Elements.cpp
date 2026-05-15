#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        
        for(int n : nums){
            count[n]++;
        }

        priority_queue<pair<int,int>> pq;

        for(auto &p : count){
            pq.push({p.second, p.first});
        }

        vector<int> result;

        for(int i = 0; i < k; i++){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};