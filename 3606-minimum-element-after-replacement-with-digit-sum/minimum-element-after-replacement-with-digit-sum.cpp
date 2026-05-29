class Solution {
public:
    int getSum(int n)
    {
        int sum = 0;
        while(n!=0)
        {
            sum += n % 10;
            n = n / 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int minm = INT_MAX;

        for(int n : nums)
        {
            int curr = getSum(n);
            minm = min(minm, curr);
        }
       return minm;
    }
};