class Solution {
public:
    int largestAltitude(vector<int>& gain) {
         int maxm = 0;
         int currSum = 0;
         for(int i : gain)
         {
            currSum += i;
            maxm = max(maxm, currSum);
         }

         return maxm;
    }
};