class Solution {
public:
    bool isValid(string s) {
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='('&&s[i+1]!=')'){
        //         return false;
        //     }
        //     if(s[i]=='{'&&s[i+1]!='}'){
        //         return false;
        //     }
        //     if(s[i]=='['&&s[i+1]!=']'){
        //         return false;
        //     }
        // int a1=0;
        // int a2=0;
        // int b1=0;
        // int b2=0;
        // int c1=0;
        // int c2=0;
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='(') a1++;
        //     if(s[i]==')') a2++;
        //     if(s[i]=='{') b1++;
        //     if(s[i]=='}') b2++;
        //     if(s[i]=='[') c1++;
        //     if(s[i]==']') c2++;

        // }
        // if((a1==a2)&&(b1==b2)&&(c1==c2)){
        //     return true;
        // }
        // return false;
        // }
       stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else if (c == ')' || c == '}' || c == ']') {
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};