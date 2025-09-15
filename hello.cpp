#include <iostream>
#include <string>
using namespace std;
int findSubstring(const string &text, const string &pattern) {
    if (pattern.empty()) 
        return 0;  // by convention, empty string is found at index 0
    int n = text.size();
    int m = pattern.size();
for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++; }
        if (j == m) {
            return i; // found pattern starting at i
        }
    }
    return -1; // not found 
    }
int main() {
    string text = "Seecs nust";

    cout << "Case 1: " << findSubstring(text, "Seecs") << endl;   // Expected 0
// 2. Pattern at the end
    cout << "Case 2: " << findSubstring(text, "nust") << endl;    // Expected 6
// 3. Pattern not present
    cout << "Case 3: " << findSubstring(text, "FAST") << endl;    // Expected -1
// 4. Empty pattern
    cout << "Case 4: " << findSubstring(text, "") << endl;        // Expected 0
return 0;}
