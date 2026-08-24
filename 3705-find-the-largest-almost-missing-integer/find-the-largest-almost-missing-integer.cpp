class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int res = -1;
        int count[51] = {0};
        for (int x : nums) {
            count[x]++;
        }
        for (int i = 0; i < n; i++) {
            if (k == n) {
                res = max(res, nums[i]);
            } else if (k == 1) {
                if (count[nums[i]] == 1) {
                    res = max(res, nums[i]);
                }
            } else {
                if (count[nums[0]] == 1) {
                    res = max(res, nums[0]);
                }
                if (count[nums[n - 1]] == 1) {
                    res = max(res, nums[n - 1]);
                }
            }
        }

        return res;
    }
};