#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> s;

    s.push(0);
    s.push(0);
    s.push(0);

    cout << "Top element: " << s.top() << endl;

    s.pop();
    cout<< "After one pop, top element:" << s.top() << endl;

    cout << "Stack Size:" << s.size() << endl;

    if(s.empty()) {
        cout << "Stack is empty\n";
    }

    else {
        cout << "Stack is not empty\n";
    }


    return 0;
}