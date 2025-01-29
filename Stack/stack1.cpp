#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Display the top element
    cout << "Top element: " << s.top() << endl; // Output: 30

    // Pop the top element
    s.pop();

    // Check the new top
    cout << "New top after pop: " << s.top() << endl; // Output: 20

    // Check if the stack is empty
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // Output: No

    // Get the size of the stack
    cout << "Stack size: " << s.size() << endl; // Output: 2

    return 0;
}
