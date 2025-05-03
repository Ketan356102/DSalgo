#include<iostream>
#include<vector>
using namespace std;

void traverseVector(vector<int>& v) {
    cout << "Vector elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {5, 10, 15, 20, 25};
    traverseVector(v);
    return 0;
}
