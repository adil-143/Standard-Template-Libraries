#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l1;
    l1.push_back(10); // Adding elements to the list
    l1.push_back(20);
    l1.push_back(30);
    l1.emplace_back(40); // Adding an element at the end of the list

    for(list<int> :: iterator it5 = l1.begin(); it5 != l1.end(); it5++){
        cout << *it5 << " "; // Iterating through the list using iterator
    }
    cout<<endl;
    for(auto num : l1){
        cout << num << " "; // Iterating through the list using range-based for loop
    }
    cout<<endl;

    // list<pair<int, int>> l2; // List of pairs
    // l2.push_back({1,2});
    // l2.emplace_back(3, 4); // Adding a pair to the list

    list<int> l3(5, 100); // List of size 5, initialized with 100
    cout << "List l3: ";
    for(auto num : l3){
        cout << num << " "; // Iterating through the list using range-based for loop
    }
    cout<<endl;

    list<int> l4(5); // List of size 5, default initialized
    cout << "List l4: ";
    for(auto num : l4){
        cout << num << " "; // Iterating through the list using range-based for loop
    }
    cout<<endl;

    list<int> l5(5,20);
    list<int> l6(l5); // Copying list l5 to l6
    cout << "List l6: ";
    for(auto num : l6){
        cout << num << " "; // Iterating through the list using range-based for loop
    }
    cout<<endl;

    list<int> l7 = {1, 2, 3, 4, 5}; 
    list<int> :: iterator it = l7.begin(); // Iterator for list
    cout << "List l7: " << *(it) << endl;
    it++; // Incrementing iterator
    cout << "Next element in l7: " << *(it) << endl;
    advance(it, 2);
    cout << "Element after incrementing iterator by 2: " << *it << endl;

    list<int> :: iterator it2 = l7.end(); // Iterator to the last element
    cout << "Last element in l7: " << *(--it2)<<endl;
    list<int> :: reverse_iterator it3 = l7.rend(); // Reverse iterator to the first element
    cout << "First element in reverse: " << *(--it3) << endl;
    list<int> :: reverse_iterator it4 = l7.rbegin(); //

    cout<< "Last element in reverse: " << *(it4) << endl;
    it4++; // Incrementing reverse iterator
    cout << "Next element in reverse: " << *(it4) << endl;
    
    cout<<l7.back() << endl; // Accessing the last element of the list
    cout<<l7.front() << endl; // Accessing the first element of the list
    l7.insert(l7.begin(), l1.begin(), l1.end()); // Inserting elements from l7 to the beginning of l1
    cout << "List l1 after inserting elements from l7: ";
    cout<<endl;
    for(auto num : l7){
        cout << num << " ";
    }
    cout<<l7.size() << endl; // Getting the size of the list
    return 0;
}


