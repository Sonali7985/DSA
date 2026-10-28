#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    bool hasText = false;

    for (char c : s) {

        // Actual text
        if (c != '*' && c != '_') {
            hasText = true;
            continue;
        }

        // Opening/closing qualifier
        if (!st.empty() && st.top() == c) {
            st.pop();       // matching pair
        }
        else {
            st.push(c);     // opening qualifier
        }
    }

    // No actual text
    if (!hasText)
        return false;

    // All qualifiers must be matched
    return st.empty();
}

int main() {
    string s;
    getline(cin, s);

    // Check empty text first
    bool hasText = false;

    for (char c : s) {
        if (c != '*' && c != '_') {
            hasText = true;
            break;
        }
    }

    if (!hasText) {
        cout << "Empty text";
    }
    else if (isValid(s)) {
        cout << "Valid qualifier";
    }
    else {
        cout << "Invalid qualifier";
        
    }

    return 0;
}