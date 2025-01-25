// Balanced Parentheses
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string of brackets: ";
    cin >> str;

    stack<char> s;
    bool balanced = true;

    for (int i = 0; i < str.length(); i++) { // Use a traditional for loop
        char c = str[i];
        if (c == '(' || c == '{' || c == '[') {
            s.push(c); // Push opening brackets
        } else {
            if (s.empty()) {
                balanced = false; // Closing bracket with no match
                break;
            }
            char top = s.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                s.pop(); // Matching pair, pop the stack
            } else {
                balanced = false; // Mismatch
                break;
            }
        }
    }

    if (!s.empty()) balanced = false; // Unmatched opening brackets

    if (balanced) {
        cout << "Balanced\n";
    } else {
        cout << "Not Balanced\n";
    }

    return 0;
}
