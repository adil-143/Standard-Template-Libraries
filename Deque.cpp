#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d1;
    d1.push_back(10); // Adding elements to the deque
    d1.push_back(20);
    d1.push_back(30);
    d1.emplace_back(40); // Adding an element at the end of the deque

    d1.push_front(5); // Adding elements to the front of the deque
    d1.push_front(1);
    d1.emplace_front(0); // Adding an element at the front of the deque
    for(deque<int> :: iterator it5 = d1.begin(); it5 != d1.end(); it5++){
        cout << *it5 << " "; // Iterating through the deque using iterator
    }
    cout<<endl;

    for(auto num : d1){
        cout << num << " "; // Iterating through the deque using range-based for loop
    }
    cout<<endl;

    deque<int> d3(5, 100); // Deque of size 5, initialized with 100
    cout << "Deque d3: ";
    for(auto num : d3){
        cout << num << " "; // Iterating through the deque using range-based for loop
    }
    cout<<endl;

    deque<int> d4(5); // Deque of size 5, default initialized
    cout << "Deque d4: ";
    for(auto num : d4){
        cout << num << " "; // Iterating through the deque using range-based for loop
    }
    cout<<endl;

    deque<int> d5(5,20);
    deque<int> d6(d5); // Copying deque d5 to d6
    cout << "Deque d6: ";
    for(auto num : d6){
        cout << num << " "; // Iterating through the deque using range-based for loop
    }
    cout<<endl;


    deque<int> d7 = {1, 2, 3, 4, 5};
    deque<int> :: iterator it = d7.begin(); // Iterator for deque
    cout << "Deque d7: " << *(it) << endl;
    it++; // Incrementing iterator
    cout << "Next element in d7: " << *(it) << endl;

    it = it+2;
    cout << "Element after incrementing iterator by 2: " << *it << endl;

    deque<int> :: iterator it2 = d7.end(); // Iterator to the last element
    cout << "Last element in d7: " << *(it2-1)<<endl;

    deque<int> :: reverse_iterator it3 = d7.rend(); // Reverse iterator to the first element
    cout << "First element in reverse: " << *(it3-1) << endl;
    deque<int> :: reverse_iterator it4 = d7.rbegin(); // Reverse iterator to
    cout<< "Last element in reverse: " << *(it4) << endl;
    it4++; // Incrementing reverse iterator
    cout << "Next element in reverse: " << *(it4) << endl;

    cout<<d7.back() << endl; // Accessing the last element of the deque
    cout<<d7.front() << endl; // Accessing the first element of the deque
    d7.pop_back(); // Removing the last element
    d7.pop_front(); // Removing the first element
    cout << "Deque d7 after popping elements from both ends: ";
    for(auto num : d7){
        cout << num << " "; // Iterating through the deque using range-based for loop
    }
    cout<<endl;
    
    cout<<d7.size() << endl; // Getting the size of the deque
    return 0;

}