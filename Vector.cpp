#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v1;
    v1.push_back(10); // Adding elements to the vector
    v1.push_back(20);
    v1.push_back(30);
     v1.emplace_back(40); // Adding an element at the end of the vector

    for(vector<int> :: iterator it5 = v1.begin(); it5 != v1.end(); it5++){
        cout << *it5 << " "; // Iterating through the vector using iterator
    }
    cout<<endl;
    for(auto num : v1){
        cout << num << " "; // Iterating through the vector using range-based for loop
    }
    cout<<endl;

    // vector<pair<int, int>> v2; // Vector of pairs
    // v2.push_back({1,2});
    // v2.emplace_back(3, 4); // Adding a pair to the vector

    // vector<int> v3(5, 100); // Vector of size 5, initialized with 100
    // cout << "Vector v3: ";

    // vector<int> v4(5); // Vector of size 5, default initialized
    // cout << "Vector v4: ";

    // vector<int> v5(5,20);
    // vector<int> v6(v5); // Copying vector v5 to v6
    // cout << "Vector v6: ";

    vector<int> v7 = {1, 2, 3, 4, 5}; 
    vector<int> :: iterator it = v7.begin(); // Iterator for vector
    cout << "Vector v7: " << *(it) << endl;
    it++; // Incrementing iterator
    cout << "Next element in v7: " << *(it) << endl;
    it = it+2;
    cout << "Element after incrementing iterator by 2: " << *it << endl;

    vector<int> :: iterator it2 = v7.end(); // Iterator to the last element
    cout << "Last element in v7: " << *(it2-1)<<endl;
    vector<int> :: reverse_iterator it3 = v7.rend(); // Reverse iterator to the first element
    cout << "First element in reverse: " << *(it3-1) << endl;
    vector<int> :: reverse_iterator it4 = v7.rbegin(); // Reverse iterator to the last element
    cout<< "Last element in reverse: " << *(it4) << endl;
    it4++; // Incrementing reverse iterator
    cout << "Next element in reverse: " << *(it4) << endl;

    cout<<v7.back() << endl; // Accessing the last element of the vector
    cout<<v7.front() << endl; // Accessing the first element of the vector

    v7.insert(v7.begin(), v1.begin(), v1.end()); // Inserting elements from v7 to the beginning of v1
    cout << "Vector v1 after inserting elements from v7: ";
    cout<<endl;
    for(auto num : v7){
        cout << num << " ";
    }

    cout<<v7.size() << endl; // Getting the size of the vector
    vector<int> v = {1,2,3,4};
    v.pop_back(); // Removing the last element from the vector
    cout << "Vector v1 after popping back: ";
    for(auto num : v){
        cout << num << " ";
    }
    cout<<endl;

    v.clear(); // Clearing the vector
    cout << "Vector v after clearing: ";
    for(auto num : v){
        cout << num << " ";
    }
    cout << endl;
    cout<<"Vector v is empty: ";
    cout<<v.empty() << endl; // Checking if the vector is empty
}