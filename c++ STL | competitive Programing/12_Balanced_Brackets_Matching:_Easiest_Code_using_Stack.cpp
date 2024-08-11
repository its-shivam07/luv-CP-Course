#include <bits/stdc++.h>
using namespace std;

// Map to associate each bracket with a corresponding integer value
unordered_map<char, int> symbols = {
    {'(', 1}, {'[', 2}, {'{', 3}, 
    {')', -1}, {']', -2}, {'}', -3}
};

// Function to check if a given string has balanced brackets
string isBalanced(string s) {
    stack<char> st;  // Stack to keep track of opening brackets
    
    // Iterate through each character in the string
    for (char bracket : s) {
        // If the bracket is an opening bracket, push it onto the stack
        if (symbols[bracket] > 0) 
            st.push(bracket);
        // If it's a closing bracket, check if it matches the top of the stack
        else {
            // If the stack is empty or the top bracket doesn't match, return "NO"
            if (st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if (symbols[top] + symbols[bracket] != 0) 
                return "NO";
        }
    }
    
    // If the stack is empty, all brackets were matched, so return "YES"
    if (st.empty()) return "YES";
    // If not, return "NO"
    return "NO";
}

int main() {
    int t; //3
          //{[()]}
          //{[(])}
          //{{[[(())]]}}
    
  
    cin >> t;  // Number of test cases
    while (t--) {
        string s;
        cin >> s;
        // Check if the string is balanced and output the result
        cout << isBalanced(s) << endl;
    }
    return 0;
}
