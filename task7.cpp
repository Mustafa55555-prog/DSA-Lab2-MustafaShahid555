#include <iostream>
#include <vector>
using namespace std;

// Function to find all indices of a given key in the array
vector<int> findAllIndices(int arr[], int n, int key) {
    vector<int> indices;  // store all found indices
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            indices.push_back(i);  // save index if element matches
        }
    }
    return indices;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = 7;

    // Test case 1: multiple occurrences
    vector<int> result1 = findAllIndices(arr, n, 2);
    cout << "Test 1 (multiple occurrences, key=2): ";
    if (result1.empty()) cout << "Not found";
    for (int i : result1) cout << i << " ";
    cout << endl;

    // Test case 2: key not present
    vector<int> result2 = findAllIndices(arr, n, 10);
    cout << "Test 2 (key not present, key=10): ";
    if (result2.empty()) cout << "Not found";
    for (int i : result2) cout << i << " ";
    cout << endl;

    // Test case 3: empty array
    int emptyArr[] = {};
    vector<int> result3 = findAllIndices(emptyArr, 0, 1);
    cout << "Test 3 (empty array): ";
    if (result3.empty()) cout << "Not found";
    for (int i : result3) cout << i << " ";
    cout << endl;

    return 0;
}

