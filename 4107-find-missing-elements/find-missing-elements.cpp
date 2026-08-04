class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> missingArray;
        int smallest = INT_MAX, largest = INT_MIN;
        set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            smallest = min(smallest, nums[i]);
            largest = max(largest, nums[i]);
            st.insert(nums[i]);
        }

        for (int i = smallest; i <= largest; i++) {
            if (st.find(i) == st.end()) {
                missingArray.push_back(i);
            }
        }

        return missingArray;
    }
};