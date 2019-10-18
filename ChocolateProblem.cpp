#include <bits/stdc++.h>
using namespace std;

bool compare(char a, char b)
{
    if(b=='{' && a=='}')
    {
        return true;
    }
    if(b=='[' && a==']')
    {
        return true;
    }
    if(b=='(' && a==')')
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        stack<char> st;
        bool ans = true;
        for(int i=0;i<len;i++)
        {
            if(s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                switch (s[i]) {
                    case '}':
                    {
                        if(st.size()==0)
                        {
                            ans = false;
                        }
                        else
                        {
                            char c = st.top();
                            st.pop();
                            if(!compare(s[i],c))
                            {
                                ans = false;
                            }
                            
                        }
                        break;
                    }
                        
                    case ']' :
                    {
                        if(st.size()==0)
                        {
                            ans = false;
                        }
                        else
                        {
                            char c = st.top();
                            st.pop();
                            if(!compare(s[i],c))
                            {
                                ans = false;
                            }
                        }
                        break;
                    }
                        
                    case ')' :
                    {
                        if(st.size()==0)
                        {
                            ans = false;
                        }
                        else
                        {
                            char c = st.top();
                            st.pop();
                            if(!compare(s[i],c))
                            {
                                ans = false;
                            }
                        }
                        break;
                    }
                        
                        
                    default:
                        break;
                }
            }
        }
        if(ans)
        {
            cout << "balanced\n";
        }
        else
            cout << "not balanced\n";
    }
}


