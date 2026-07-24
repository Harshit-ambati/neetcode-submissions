class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        vector<int>res;
        for(int n:nums){
            map1[n]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto &[element,freq]:map1){
            pq.push({freq,element});
            if(pq.size() > k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
