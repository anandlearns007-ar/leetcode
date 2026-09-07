class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums1;
        vector<int> nums2;
        nums1.push_back(nums[0]);
        int curr1 = nums[0];
        nums2.push_back(nums[1]);
        int curr2 = nums[1];
        for (int i = 2; i < n; i++) {
            if (curr1 > curr2) {
                nums1.push_back(nums[i]);
                curr1 = nums[i];
            } else {
                nums2.push_back(nums[i]);
                curr2 = nums[i];
            }
        }
        int n2 = nums2.size();
        int i = 0;
        while(n2--)
        {
            nums1.push_back(nums2[i]);
            i++;
        }

        return nums1;
    }
};