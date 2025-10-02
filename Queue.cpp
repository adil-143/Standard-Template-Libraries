#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1;
    q1.push(10); // Adding elements to the queue
    q1.push(20);
    q1.push(30);
    q1.emplace(40); // Adding an element to the queue
    cout << "Front element: " << q1.front() << endl; // Accessing the front element of the queue
    cout << "Back element: " << q1.back() << endl; // Accessing the back element of the queue
    q1.pop(); // Removing the front element of the queue
    cout << "Front element after pop: " << q1.front() << endl; // Accessing the front element of the queue after pop

    cout << "Size of queue: " << q1.size() << endl; // Getting the size of the queue
    cout << "Is queue empty? " << (q1.empty() ? "Yes" : "No") << endl; // Checking if the queue is empty

    queue<int>q2;
    q1.swap(q2); // Swapping contents of two queues
    cout << "Front element of q2 after swap: " << q2.front() << endl;
    cout << "Front element of q1 after swap: " << q2.front() << endl;

    q2.swap(q1); // Swapping back
    cout << "Front element of q1 after swapping back: " << q1.front() << endl;
    return 0;
}