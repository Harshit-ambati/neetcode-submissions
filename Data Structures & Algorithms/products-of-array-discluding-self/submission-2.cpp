class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int s = 1;
        int p = 1;
        int left = 0;
        int right = n - 1;
        while(left<n){
            ans[left] *= p;
            p *= nums[left];
            left++;
            ans[right] *= s;
            s*=nums[right];
            right--;
        }
        return ans;
    }
};
