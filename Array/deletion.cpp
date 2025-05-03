#include<iostream>
using namespace std;

void deleteElement(int arr[], int& size, int pos) {
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
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

    int pos = 2; // Delete element at index 2 (value 30)
    deleteElement(arr, size, pos);

    cout << "After deletion: ";
    printArray(arr, size);

    return 0;
}
