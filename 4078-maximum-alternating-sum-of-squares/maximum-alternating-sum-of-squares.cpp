class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for (auto &num : nums) {
            num = num * num;
        }
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int k = n / 2;
        long long ans = 0;
        for (int i = 0; i < k; i++) {
            ans -= nums[i];
        }
        for (int i = k; i < n; i++) {
            ans += nums[i];
        }

        return ans;
    }
};