class Solution {
public:
    bool isValid(string s) {
        //if s[i] is open bracket, push in to stack, otherwise check stack.top() & s[i] is a pair or not
        //pair -> stack.pop()
        stack<char> mystack;
        int n = s.size();
        for (int i=0; i<n; i++) {
            if (s[i]=='(' || s[i]=='[' || s[i]=='{') {
                mystack.push(s[i]);
            }
            else if (mystack.empty()) {return false;}
            else if (mystack.top() == '(' && s[i] == ')') {mystack.pop();}
            else if (mystack.top() == '[' && s[i] == ']') {mystack.pop();}
            else if (mystack.top() == '{' && s[i] == '}') {mystack.pop();}
            else {return false;}
        }

        return mystack.empty();
    }
};
