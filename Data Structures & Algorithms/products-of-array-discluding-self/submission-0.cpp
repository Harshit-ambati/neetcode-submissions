class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n,1);
        int p = 1,s = 1;
        int i = 0, j = n - 1;
        while(i<n){
            res[i] *= p;
            p *= nums[i];
            i++;
            res[j] *= s;
            s *= nums[j];
            j--;
        }
        return res;
    }
};
