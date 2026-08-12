class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int maxWindow = INT_MIN;

        int left = 0;
        for(int right = 0; right < nums.size(); right++)
        {
            mp[nums[right]]++;
            while(mp[nums[right]] > k)
            {
                mp[nums[left]]--;
                left++;
            }
            maxWindow = max(maxWindow, right-left+1);
        }
        return maxWindow;
    }
};