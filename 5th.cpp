#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();

            if (c == ')' && top != '(') return false;
            if (c == ']' && top != '[') return false;
            if (c == '}' && top != '{') return false;
        }
    }

    return st.empty();
}

int main() {
    string s;
    cout << "Enter bracket sequence (e.g., {[()]} or {[(])}): ";
    if (cin >> s) {
        bool result = isValid(s);
        cout << "\nIs the bracket sequence valid? " 
             << (result ? "True" : "False") << endl;
    }
    return 0;
}