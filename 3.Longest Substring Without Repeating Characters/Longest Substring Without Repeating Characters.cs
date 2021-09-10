class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int init = 0;
        for(int i = 0; i < s.length(); i++) 
        {
            for(int j = init; j < i ;j++)
            {
                if(s[j] == s[i])
                {
                    if((i-init) > max)
                    {
                        max = i-init;
                    }
                    init = i;
                }
            }
        }
        return max;
        
    }
};

class Solution1 {
public:
    int lengthOfLongestSubstring(string s) {
        
        map charMap;
        int start = -1;
        int maxLen = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (charMap.count(s[i]) != 0) {
                start = max(start, charMap[s[i]]);
            }
            charMap[s[i]] = i;
            maxLen = max(maxLen, i-start);
        }
        
        return maxLen;
    }
};