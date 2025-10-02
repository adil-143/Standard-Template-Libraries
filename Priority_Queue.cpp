#include<bits/stdc++.h>
using namespace std;

int main(){

    //push -> O(log n)
    //pop -> O(log n)
    //top -> O(1)
    //size -> O(1)
    //empty -> O(1)
    //Maximum element at the top(MAX HEAP)
    priority_queue<int> pq; // Max-Heap by default
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(15);
    pq.emplace(25); // Another way to insert elements
    cout << "Top element (max): " << pq.top() << endl; // Should print 20
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl; // Should print 15
    
    cout << "Size of priority queue: " << pq.size() << endl; // Should print 3
    cout << "Is priority queue empty? " << (pq.empty() ? "Yes" : "No") << endl; // Should print No

    //Minimum element at the top(MIN HEAP)
    priority_queue<int, vector<int>, greater<int>> pq1; // Min-Heap
    pq1.push(10);
    pq1.push(5);
    pq1.push(20);
    pq1.push(15);
    pq1.emplace(25); // Another way to insert elements
    cout << "Top element (min): " << pq1.top() << endl; // Should print 5
    pq1.pop();
    cout << "Top element after pop: " << pq1.top() << endl; // Should print 10

}