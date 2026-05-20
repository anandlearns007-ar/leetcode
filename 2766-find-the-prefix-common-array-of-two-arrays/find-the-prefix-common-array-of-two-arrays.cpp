class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> seenA(n+1, 0);
        vector<int> seenB(n+1, 0);
        vector<int> ans;
        int count = 0;
        for (int i = 0; i < A.size(); i++) {
            seenA[A[i]]=1;
            seenB[B[i]]=1;
            if(A[i] == B[i])
            {
                count++;
            }
            if (seenA[B[i]] == 1 && A[i] != B[i]) {
                count++;
            }
            if (seenB[A[i]]== 1 && A[i] != B[i]) {
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};