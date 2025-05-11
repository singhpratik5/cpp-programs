#include<iostream>
#include<stack>
using namespace std;

stack<int> s;

bool isEmpty() {
    if(s.empty())
        return true;
    else
        return false;
}

void push(int x) {
    s.push(x);
}

int pop() {
    if(isEmpty())
        return -1;
    else {
        int temp = s.top();
        s.pop();
        return temp;
    }
}

void deleteMiddle(int current = 0) {
    if(isEmpty() || current == s.size()/2)
        pop();
    else {
        int temp = pop();
        deleteMiddle(current+1);
        push(temp);
    }
}

int main() {
    int size;
    cout<<"Enter the size of the stack: ";
    cin>>size;

    int x;
    for(int i=0; i<size; i++) {
        cin>>x;
        push(x);
    }

    deleteMiddle();

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}