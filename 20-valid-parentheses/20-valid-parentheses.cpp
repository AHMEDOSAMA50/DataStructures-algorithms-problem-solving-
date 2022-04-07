class Solution {
public:
    bool isValid(string s) {
        stack<char> m;
    for (int i = 0; i < s.length();i++) 
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            m.push(s[i]);
        }
        else {


            if (!m.empty() && ((m.top() == '(' && s[i] == ')') || (m.top() == '{' && s[i] == '}') || (m.top() == '[' && s[i] == ']'))) {
                m.pop();
            }

            else {
                 
                m.push(s[i]);
            }
            

        }
        
    
    if (m.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
       
};
};