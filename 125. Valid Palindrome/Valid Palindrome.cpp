//Given a string s, determine if it is a palindrome, considering only 
//alphanumeric characters and ignoring cases.


class TediousSolution {
public:
    bool isPalindrome(std::string s) {
        int i = 0;
        int j = s.size() - 1;
        string a = "";
        string b = "";
        while (i <= j) {
            a = "";
            b = "";
            while(!(s[i] <= 'z' && s[i] >= 'a' || 
              s[i] <= 'Z' && s[i] >= 'A' || 
              s[i] <='9' && s[i] >= '0'))  {
                i=i+1;
                if(i > s.size())
                    return true;
            }
            while(!(s[j] <= 'z' && s[j] >= 'a' || 
              s[j] <= 'Z' && s[j] >= 'A' || 
              s[j] <='9' && s[j] >= '0'))  {
                j=j-1;
                if(j < 0) 
                    return true;
            }
            a +=tolower(s[i]);
            b +=tolower(s[j]);
            if(a.compare(b)) {
                return false; 
            }
            i = i + 1;
            j = j - 1;
        }
        return true;

    }
};

class SimpleAndFastSolution {
public:
    bool isPalindrome(string s) {
        if (s.empty())
            return true;
        const char* s1 = s.c_str();
        const char* e = s1 + s.length() - 1;
        while (e > s1) {
            if (!isalnum(*s1)) {++s1; continue;}
            if (!isalnum(*e)) {--e; continue;}
            if (tolower(*s1) != tolower(*e)) return false;
            else {--e; ++s1;}
        }
        return true;
    }
};