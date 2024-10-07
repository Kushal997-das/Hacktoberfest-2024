class Solution {
public:
    bool isValid(string s) {
      stack<char>st;
      int cnt=0;
      for(int i=0;i<s.size();i++)
      {
           if(st.empty())
           {
               st.push(s[i]);
           }
           else
           {
               if(st.top()=='(')
               {
                   if(s[i]==')')st.pop();
                   else if(s[i]=='}')st.pop(),cnt++;
                   else if(s[i]==']')st.pop(),cnt++;
                   else if(s[i]=='>')st.pop(),cnt++;
                   else if(s[i]=='(' || s[i]=='[' || s[i]=='{' || s[i]=='<')st.push(s[i]);

               }
               else if(st.top()=='[')
               {
                   
                   if(s[i]==')')st.pop(),cnt++;
                   else if(s[i]=='}')st.pop(),cnt++;
                   else if(s[i]==']')st.pop();
                   else if(s[i]=='>')st.pop(),cnt++;
                   else if(s[i]=='(' || s[i]=='[' || s[i]=='{' || s[i]=='<')st.push(s[i]);
               }
               else if(st.top()=='{')
               {
                   
                  if(s[i]==')')st.pop(),cnt++;
                   else if(s[i]=='}')st.pop();
                   else if(s[i]==']')st.pop(),cnt++;
                   else if(s[i]=='>')st.pop(),cnt++;
                   else if(s[i]=='(' || s[i]=='[' || s[i]=='{' || s[i]=='<')st.push(s[i]);
               }
               else if(st.top()=='<')
               {
                   if(s[i]==')')st.pop(),cnt++;
                   else if(s[i]=='}')st.pop(),cnt++;
                   else if(s[i]==']')st.pop(),cnt++;
                   else if(s[i]=='>')st.pop();
                   else if(s[i]=='(' || s[i]=='[' || s[i]=='{' || s[i]=='<')st.push(s[i]);
               }
               else
               {
                   st.push(s[i]);
               }
           }
      }
      if(!st.empty()|| cnt>=1)return false;
      else
      {
          return true;
      }
    }
};