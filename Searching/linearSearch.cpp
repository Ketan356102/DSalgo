#include<iostream>
#include<vector>
using namespace std;
int linearSearch(const vector<int>& arr, int target) {
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {10,20,30,40,50};
    int target = 40;
    int idx = linearSearch(arr, target);
    if(idx!=1) {
        cout << "Element found at index:" << idx << endl;
    }
    else {
        cout << "Not Elemet found at index: " << endl;
    }
    return 0;
}