#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        stack<char> st;
        cin >> s;
        for (int i = 0; i <= s.length(); i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (!st.empty())
                {
                    st.pop();
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else if (s[i] == '\0')
            {
                if (!st.empty())
                {
                    cout << "NO" << endl;
                    break;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
    return 0;
}