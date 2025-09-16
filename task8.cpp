#include <iostream>
using namespace std;

// Function to find the first occurrence of a pattern in text
// Returns the index if found, otherwise returns -1
int naivePatternMatch(string text, string pattern) {
    int n = text.size();
    int m = pattern.size();

    if (m == 0) return -1;  // handle empty pattern case

    for (int i = 0; i <= n - m; i++) {
        int j;
        // Check if pattern matches at position i
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) break;
        }
        if (j == m) return i;  // full match found
    }
    return -1;  // no match
}

int main() {
    // Test case 1: pattern at beginning
    cout << "Test 1 (pattern at beginning): "
         << naivePatternMatch("datastructures", "data") << endl;

    // Test case 2: pattern at end
    cout << "Test 2 (pattern at end): "
         << naivePatternMatch("datastructures", "ures") << endl;

    // Test case 3: pattern not present
    cout << "Test 3 (pattern not present): "
         << naivePatternMatch("datastructures", "algo") << endl;

    // Test case 4: empty pattern
    cout << "Test 4 (empty pattern): "
         << naivePatternMatch("datastructures", "") << endl;

    return 0;
}

