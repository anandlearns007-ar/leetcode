class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        
        for(char c : s)
        {
            freq1[c - 'a']++;
        }
       
        for(char c : target)
        {
             freq2[c - 'a']++;
        }
        int minm = INT_MAX;
        for(char c : target)
        {
            minm = min(minm, freq1[c - 'a'] / freq2[c - 'a']);
        }
        return minm;
    }
};