#include <iostream>

using namespace std;

const int  MAX_SIZE = 100;

class MyStack {
    private:
    int arr[MAX_SIZE];
    int topIndex;

public:
        MyStack() : topIndex(-1)
        {
            
        }
//Function to push element onto the stack
    void push(int value) {
        if(topIndex < MAX_SIZE - 1 )
        {
            arr[++topIndex] = value;
        }
        else {
            cout<<"Stack overflow. Cannot push more elements. \n";
        }
    }
//Function to pop top element from the Stack
    void pop()
    {
        if (topIndex >=0 ) {
            topIndex --;
        }
        else {
            cout<<"Stack is empty.Cannot pop \n";
        }
    }
    
    int top() const {
        if (topIndex >= 0) {
            return arr[topIndex];
        } else {
            return -1; // Return -1 to indicate an empty stack
        }
    }
    bool isEmpty() const {
    return topIndex == -1;
}
    size_t size() const {
    return topIndex + 1;
}
    
};

int main()
{
    MyStack mystack; //Creating an instance of mystack class
    
    mystack.push(10);
    mystack.push(20);
    mystack.push(40);
    
    if(mystack.isEmpty())
    {
        cout<<"Stack is empty.\n";
    }
    else {
        cout<<"Stack is not empty\n";
    }
    cout<<"Top element"<<mystack.top()<<endl;
    mystack.pop();
    cout<<"Top element after popping"<<mystack.top()<<endl;
    cout<<"Stack size"<<mystack.size()<<endl;
    return 0;
    }
