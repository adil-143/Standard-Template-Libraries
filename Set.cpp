#include<bits/stdc++.h>
using namespace std;

int main(){

    //It is sorted and unique elements
    //insert -> O(log n)
    //erase -> O(log n)
    //find -> O(log n)
    //size -> O(1)
    //empty -> O(1)

    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(10);
    s.insert(7);
    s.emplace(3); // Another way to insert elements
    s.insert(5); // Duplicate, will be ignored
    cout << "Set elements in sorted order: ";
    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of set: " << s.size() << endl;
    cout << "Is set empty? " << (s.empty() ? "Yes" : "No") << endl;
    s.erase(3); // Erase element with value 3
    cout << "Set elements after erasing 3: ";
    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;

    auto it = s.find(7);
    if(it != s.end()){
        cout << "Element 7 found in set." << endl;
    } else {
        cout << "Element 7 not found in set." << endl;
    }
    it = s.find(3);
    if(it != s.end()){
        cout << "Element 3 found in set." << endl;
    } else {
        cout << "Element 3 not found in set." << endl;
    }
    // Iterators
    set<int>::iterator it1 = s.begin();
    cout << "First element in set: " << *(it1) << endl;
    it1++; // Incrementing iterator
    cout << "Next element in set: " << *(it1) << endl;
    std::advance(it1, 2); // Correct way to move iterator forward by 2
    cout << "Element after incrementing iterator by 2: " << *it1 << endl;

    int cnt = s.count(10); // Count occurrences of 10
    cout << "Count of element 10 in set: " << cnt << endl;

    auto itlow = s.find(1); 
    auto itup = s.find(5);  
    s.erase(itlow, itup); // Erase elements in range [itlow, itup)
    cout << "Set elements after erasing range [1, 5): ";
    for(auto i : s){
        cout << i << " ";
    }

    auto it2 = s.lower_bound(7); // First element not less than 7
    auto it3 = s.upper_bound(7); // First element greater than 7
    cout << "\nLower bound of 7: " << (it2 != s.end() ? to_string(*it2) : "Not found") << endl;
    cout << "Upper bound of 7: " << (it3 != s.end() ? to_string(*it3) : "Not found") << endl;



    // Multiset
    multiset<int> ms;
    ms.insert(5);
    ms.insert(1);
    ms.insert(1);
    ms.insert(10);
    ms.insert(7);
    ms.emplace(3); // Another way to insert elements    
    ms.insert(5); // Duplicate, will be stored
    ms.erase(1); // Erase all occurrences of 1
    cout << "\nMultiset elements in sorted order: ";
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of multiset: " << ms.size() << endl;

    int cnt1 = ms.count(5); // Count occurrences of 5
    cout << "Count of element 5 in multiset: " << cnt1 << endl;

    ms.erase(ms.find(5)); // Erase one occurrence of 5
    cout << "Multiset elements after erasing one occurrence of 5: ";
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}