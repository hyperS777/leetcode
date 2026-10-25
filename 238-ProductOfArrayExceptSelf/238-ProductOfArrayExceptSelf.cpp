// Last updated: 26/10/2026, 12:16:08 AM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> postfix(nums.size());
        vector<int> ans(nums.size());

        prefix[0]=nums[0];
        postfix[nums.size()-1]=nums[nums.size()-1];

        for(int i=1; i<nums.size(); i++){ 
            prefix[i]=nums[i]*prefix[i-1];
        }
        for(int i=nums.size()-2; i>=1; i--){
            postfix[i]=nums[i]*postfix[i+1];
        }
        ans[0]=postfix[1];
        ans[nums.size()-1]=prefix[nums.size()-2];

        for(int i=1; i<nums.size()-1; i++){
            ans[i]=prefix[i-1]*postfix[i+1];
        }
        return ans;
    }
};