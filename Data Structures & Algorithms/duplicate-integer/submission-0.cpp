class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_map<int,int>dup;
    for(int i = 0;i<nums.size();i++){
        if(dup.find(nums[i])!=dup.end()){
            return true;
        }
        else{
            dup[nums[i]]++;
        }
    }
    return false;
    }
};