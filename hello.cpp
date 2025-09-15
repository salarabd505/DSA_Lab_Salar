#include <iostream>
#include <vector>
using namespace std;
vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;
for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
return indices;
}
int main() {
    // Test Case 1
    vector<int> arr1 = {1, 3, 7, 3, 5, 3, 9};
    int key1 = 3;
    vector<int> result1 = findAllIndices(arr1, key1);
    cout << "Indices of " << key1 << ": ";
    for (int i : result1) cout << i << " ";
    cout << endl;
    // Test Case 2
    vector<int> arr2 = {10, 20, 30, 40};
    int key2 = 25;
    vector<int> result2 = findAllIndices(arr2, key2);
    cout << "Indices of " << key2 << ": ";
    if (result2.empty()) cout << "Not found";
    else for (int i : result2) cout << i << " ";
    cout << endl;
    // Test Case 3: 
    vector<int> arr3 = {};
    int key3 = 5;
    vector<int> result3 = findAllIndices(arr3, key3);
    cout << "Indices of " << key3 << ": ";
    if (result3.empty()) cout << "Array is empty";
    else for (int i : result3) cout << i << " ";
    cout << endl;
return 0;
}
