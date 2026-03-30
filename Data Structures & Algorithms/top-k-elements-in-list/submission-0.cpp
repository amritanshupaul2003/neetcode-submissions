class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> map;

        for(auto x : nums){
            map[x]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        for(auto x : map){
            bucket[x.second].push_back(x.first);
        }

        vector<int>freq;

        for(int i = bucket.size() - 1; freq.size() < k; i-- ){
            for(int x : bucket[i]){
                freq.push_back(x);
            }
        }
        return freq;
    }
};
