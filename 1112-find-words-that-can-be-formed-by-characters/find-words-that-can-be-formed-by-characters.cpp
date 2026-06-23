class Solution {
public:

    bool canForm(string word, vector<int>& freq)
    {
        vector<int> temp = freq;

        for(char c : word)
        {
            temp[c - 'a']--;

            if(temp[c - 'a'] < 0)
            {
                return false;
            }
        }

        return true;
    }

    int countCharacters(vector<string>& words, string chars) {

        vector<int> freq(26,0);

        for(char c : chars)
        {
            freq[c - 'a']++;
        }

        int ans = 0;

        for(string& word : words)
        {
            if(canForm(word, freq))
            {
                ans += word.size();
            }
        }

        return ans;
    }
};