#include <iostream>
#include <stack>
using namespace std;

int main() {
    string postfix;
    cin >> postfix;

    stack<int> st;

    for (int i = 0; i < postfix.size(); i++)  {
        char ch = postfix[i];

        if (ch >= '0' && ch <= '9') {
            st.push(ch - '0');
        }
        else {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            if (ch == '+')
                st.push(a + b);
            else if (ch == '-')
                st.push(a - b);
            else if (ch == '*')
                st.push(a * b);
            else if (ch == '/')
                st.push(a / b);
        }
    }

    cout << "Result = " << st.top();

    return 0;
}
