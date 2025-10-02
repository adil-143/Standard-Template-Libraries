#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s1;
    s1.push(10); // Adding elements to the stack
    s1.push(20);
    s1.push(30);
    s1.emplace(40); // Adding an element to the stack
    cout << "Top element: " << s1.top() << endl; // Accessing the top element of the stack
    s1.pop(); // Removing the top element of the stack
    cout << "Top element after pop: " << s1.top() << endl; // Accessing the top element of the stack after pop

    cout << "Size of stack: " << s1.size() << endl; // Getting the size of the stack
    cout << "Is stack empty? " << (s1.empty() ? "Yes" : "No") << endl; // Checking if the stack is empty

    stack<int>s2;
    s1.swap(s2); // Swapping contents of two stacks
    cout << "Top element of st2 after swap: " << s2.top() << endl;
    cout << "Top element of s1 after swap: " << s2.top() << endl;
    s2.swap(s1); // Swapping back
    cout << "Top element of s1 after swapping back: " << s1.top() << endl;
    return 0;

}