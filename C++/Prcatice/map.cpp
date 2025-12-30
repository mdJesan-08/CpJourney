#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    map<string, int> mp;
    
    // Insert elements
    mp["apple"] = 5;
    mp["banana"] = 3;
    mp["cherry"] = 8;
    mp.insert({"date", 2});
    
    // Access elements
    cout << "apple: " << mp["apple"] << endl;
    cout << "banana: " << mp["banana"] << endl;
    
    // Check if key exists
    if(mp.find("cherry") != mp.end()) {
        cout << "cherry exists: " << mp["cherry"] << endl;
    }
    
    // Size
    cout << "Map size: " << mp.size() << endl;
    
    // Iterate through map - Method 1: Range-based for loop (C++11)
    cout << "\nMethod 1 - Range-based for loop:" << endl;
    for(auto& pair : mp) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    
    // Iterate through map - Method 2: Using iterator
    cout << "\nMethod 2 - Using iterator:" << endl;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " -> " << it->second << endl;
    }
    
    // Iterate through map - Method 3: Using map::iterator
    cout << "\nMethod 3 - Using map::iterator:" << endl;
    for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " -> " << it->second << endl;
    }
    
    // Iterate through map - Method 4: Reverse iteration
    cout << "\nMethod 4 - Reverse iteration:" << endl;
    for(auto it = mp.rbegin(); it != mp.rend(); it++) {
        cout << it->first << " -> " << it->second << endl;
    }
    
    // Delete element
    mp.erase("banana");
    
    // Clear map
    // mp.clear();
    
    return 0;
}