class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n = cost.size();
        int totalCost = 0, j = 0;
        for(int i = n-1; i >= 0; i--)
        {
           if(j == 2)
           {
              j = 0;
              continue;
           } 
           totalCost += cost[i];
           j++;
        }

        return totalCost;
    }
};