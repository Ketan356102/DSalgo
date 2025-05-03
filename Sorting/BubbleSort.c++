#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for(int i=0; i<n-1; i++) { // time Complexity :- O(n^2) and Space Complexity :- O(1)
        // Number of the Rounds
        for(int j=0; j<n; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main() {
    vector<int> arr = {64,34,25,12,22,11,90};
    bubbleSort(arr);
    cout << "Sorted array: ";
    for(int num: arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}