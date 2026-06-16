class Solution {
public:
    string processStr(string s) {
        string result = "";

        for (char c : s)
        {
            if (islower(c)) 
            {
                result += c;
            } else if (c == '#') 
            {
                result += result;
            } 
            else if (c == '%') 
            {
                reverse(result.begin(), result.end());
            } 
            else 
            {
                if(!result.empty())
                {
                    result.pop_back();
                }
            }
        }

        return result;
    }
};