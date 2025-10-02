#include<bits/stdc++.h>
using namespace std;

int main(){

    //pair is a container within the Standard Template Library (STL) that allows you to store two heterogeneous (different data types) or homogeneous (same data types) objects as a single unit. It is defined in the <utility> header. 

    pair<int, int> p1;
    p1.first = 10;
    p1.second = 20;
    cout << "Pair p1: (" << p1.first << ", " << p1.second << ")" << endl;

    pair<int, int> p2(30, 40);
    cout << "Pair p2: (" << p2.first << ", " << p2.second << ")" << endl;

    pair<int, int> p3 = {1,2};
    cout << "Pair p3: (" << p3.first << ", " << p3.second << ")" << endl;

    // pair<int, int> p4;
    // cin >> p4.first >> p4.second;
    // cout << "Pair p4: (" << p4.first << ", " << p4.second << ")" << endl;

    pair<int, pair<int, int>> p5 = {1, {2, 3}};
    cout << "Pair p5: (" << p5.first << ", (" << p5.second.first << ", " << p5.second.second << "))" << endl;

    pair<int, string> arr[] = {{1, "adil"}, {3, "mayank"}, {5, "shubham"}};
    cout << "Array of pairs:" << endl;
    for (auto num : arr) {
        cout << "(" << num.first << ", " << num.second << ")" << endl;
    }

    cout<<arr[1].second << endl;

    return 0;
}