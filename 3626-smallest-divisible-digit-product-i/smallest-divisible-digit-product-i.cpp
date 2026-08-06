class Solution {
public:
    int getProduct(int n)
    {
        int ans = 1;
        while(n > 0)
        {
            int rem = n % 10;
            ans = ans * rem;
            n = n/10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
         int ans;
         while(n)
         {
            int product = getProduct(n);
            if(product % t == 0)
            {
                ans = n;
                break;
            }
            n++;
         }

         return ans;
    }
};