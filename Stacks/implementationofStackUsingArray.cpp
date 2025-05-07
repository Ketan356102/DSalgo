#include<iostream>
# define MAX 100
using namespace std;
class Stack {
    private:
    int arr[MAX];
    int top;
    public:
    Stack() {
        top = -1; // Stacks is the empty
    }
    void push(int x) {
        if(top >= MAX-1) {
            cout << "Stack is overflow\n"; // stacks is overflow
        } else {
            arr[++top] = x; // Pushed the element into Stacks 
            cout << x << "pushed into stack\n";
        }
    }
    void pop() {
        if(top < 0) {
            cout << "Stack Underflow/n";
        } else {
            cout << arr[top--] << "popped from stack\n"; // Remove the  element from the Stack
        }
    }
    int peek() {
        if(top < 0) {
            cout << "Stack is empty\n";
            return -1;
        }
        else {
            return arr[top]; // Return the Top element
        }
    }
    bool isEmpty() {
        return (top < 0);
    }
    void display() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack element : ";
        for(int i=0; i<=top; i++) {
            cout << arr[i] << endl;
        }
        cout << endl;
    }
};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(35);
    s.pop();
    cout << "Top element: " << s.peek() << endl;
    s.display();
    return 0;
}