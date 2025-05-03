#include<iostream>
using namespace std;

void InsertElement(int arr[], int& size, int element, int pos) {
    for(int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    } 
    arr[pos] = element; // Insert the element at the specified position
    size++; // Increase the size of the array
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Original array: ";
    printArray(arr, size);

    int element = 25;
    int pos = 2; // Insert at index 2 (between 20 and 30)

    // Correct function name (InsertElement)
    InsertElement(arr, size, element, pos);

    cout << "After insertion: ";
    printArray(arr, size);

    return 0;
}
