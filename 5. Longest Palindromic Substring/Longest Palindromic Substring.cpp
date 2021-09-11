//Given a string s, return the longest palindromic substring in s.
class Solution {
private: 
    int expand (string &s, int L, int R ) {
        while(L >= 0 && R < s.size() &&  s[L] == s[R]) {
            L--;
            R++;
        }
        return R-L-1;
    }
public:
    string longestPalindrome(string s) {
        if(s.empty()) {
            return s;
        }
        int start = 0;
        int Len = 0;
        int Len1 = 0;
        int Len2 = 0;
        int maxLen = 0;
        for(int i = 0; i < s.size(); i++) {
            Len1 = expand(s,i,i);
            Len2 = expand(s,i,i+1);
            Len = max(Len1,Len2);
            if(maxLen < Len) 
            {
                start = i - (Len-1)/2;
                maxLen = Len;
            }
        }
        return s.substr(start,maxLen);
        
    }
};