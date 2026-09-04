class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> maxArray(n);
        vector<int> minArray(n);
        int maxm = INT_MIN, minm = INT_MAX;
        for(int i = 0; i < n ;i++)
        {
            maxm = max(maxm, nums[i]);
            maxArray[i] = maxm;
        }
        for(int i = n - 1; i >=0; i--)
        {
            minm = min(minm, nums[i]);
            minArray[i] = minm;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(maxArray[i] - minArray[i] <= k)
            {
                return i;
            }
        }

        return -1;
    }
};