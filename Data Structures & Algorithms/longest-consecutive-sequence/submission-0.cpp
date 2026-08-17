class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> lcs(nums.begin(),nums.end());
        int maxcount = 0;
        for(int item : lcs){
           if(lcs.find(item - 1) == lcs.end()){
            int count = 1;
            int current_item = item;
            while(lcs.find(current_item + 1) != lcs.end()){
                current_item++;
                count++;
            }
            maxcount = max(maxcount,count);
           }
        }
        return maxcount;
    }
};
