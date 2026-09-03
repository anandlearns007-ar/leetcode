class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int smallest = nums1[0];
        bool hasOdd = false;
        for (int i : nums1) {
            if (i < smallest) {
                smallest = i;
            }
            if (i & 1) {
                hasOdd = true;
            }
        }

        if (smallest & 1) {
            return true;
        }

        return !hasOdd;
    }
};