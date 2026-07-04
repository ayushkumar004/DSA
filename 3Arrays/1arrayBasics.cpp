#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr2(5,0);
    for(int i=0; i<arr.size(); i++) {
        arr2[i] = arr[i] * 2;
    }
    for(int i=0; i<arr2.size(); i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}