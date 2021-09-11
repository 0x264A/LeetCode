
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
class SimpleSolution {
    public:
        bool isValid(string s) {
            stack<char> stk;
            for (char c : s) {
                if (c == '(' || c == '[' || c == '{') {
                    stk.push(c);
                } else {
                    if(c == ')') {
                        if(stk.empty() || stk.top()!= '(')
                            return false;
                    }
                    if(c == '}') {
                        if(stk.empty() || stk.top()!= '{')
                            return false;
                    }
                    if(c == ']') {
                        if(stk.empty() || stk.top()!= '[')
                            return false;
                    }
                    stk.pop();
                }
            }
            return stk.empty();
        }
    };

//From https://leetcode-solution-leetcode-pp.gitbook.io/leetcode-solution/easy/20.valid-parentheses
class GeniusSolution {
public:
    bool isValid(string s) {
        int top = -1;
        for(int i =0;i<s.length();++i){
            if(top<0 || !isMatch(s[top], s[i])){
                ++top;
    
            }else{
                --top;
            }
        }
        return top == -1;
    }
    bool isMatch(char c1, char c2){
        if(c1 == '(' && c2 == ')') return true;
        if(c1 == '[' && c2 == ']') return true;
        if(c1 == '{' && c2 == '}') return true;
        return false;
    }
};