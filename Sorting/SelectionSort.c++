#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i=0; i<n-1; i++) { // Time Complexity :- O(n^2) & Space Complexity :-  O(1)
        int min_Index = i;

        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min_Index]) {
                min_Index = j;
            }
        }
        swap(arr[i],arr[min_Index]);
    }
}
int main() {
    vector<int> arr = {64,25,12,22,11};
    selectionSort(arr);
    cout << "Sorted array: ";
    for(int num: arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}