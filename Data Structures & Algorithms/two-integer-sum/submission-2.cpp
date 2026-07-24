class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>t;
        for(int i = 0;i<nums.size();i++){
            t[nums[i]] = i;
        }
        for(int i = 0;i<nums.size();i++){
            int diff = target - nums[i];
            if(t.find(diff)!=t.end() && t[diff]!=i){
                return {i,t[diff]};
            }
        }
        return {};
    }
};
