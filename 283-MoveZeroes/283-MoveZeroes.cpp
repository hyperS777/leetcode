// Last updated: 27/10/2026, 11:19:41 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[l], nums[i]);
                l++;
            }
        }
    }
};