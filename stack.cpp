#include <iostream>
using namespace std;

int top = -1;

void push_opertaion(int *stack, int n) {
    int x;
    cout << "Enter element : ";
    cin >> x;
    if (top == n - 1)
        cout << "Overflow"<<endl;
    else {
        top++;
        stack[top] = x;
    }
}

void pop_operation(int *stack) {
    if (top == -1)
        cout << "Underflow"<<endl;
    else {
        cout << "Pop element is :" << stack[top];
        top--;
    }
}

void display_operation(int *stack) {
    cout << "Stack : ";
    if (top == -1)
        cout << "Empty";
    else {
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
    cout<<endl;
    }
}

void exit_operation(bool *loop) {
    *loop = false;
}
int main() {
    int n;
    cout<<"Enter size of stack : ";
    cin>>n;
    int stack[n];
    bool loop = true;
    cout << "Stack size is 5..."<<endl;
    cout << "\nPress 1 for push...\nPress 2 for pop...\nPress 3 for display stack...\nPress 4 for exit\n";
    while (loop == true) {
        cout << "\nEnter operation : ";
        int operations;
        cin >> operations;
        switch (operations) {
        case 1:
            push_opertaion(stack,n);
            break;
        case 2:
            pop_operation(stack);
            break;
        case 3:
            display_operation(stack);
            break;
        case 4:
            exit_operation(&loop);
            break;
        default:
            cout << "Please enter correct operation";
            continue;
        }
    }
    return 0;
}
