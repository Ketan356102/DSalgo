#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 40;
    int idx = BinarySearch(arr, target);

    if(idx != -1) {
        cout << "Element found at index: " << idx << endl;
    }
    else {
        cout << "Element not found." << endl;
    }

    return 0;
}
