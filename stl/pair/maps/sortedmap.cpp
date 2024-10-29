#include <bits/stdc++.h>
using namespace std;
//map keys are unique
int main() {  
    map<int, string> m;
    m[1] = "abc";// O(log(n)) if we write m[6] then also it is same tc with empty string
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " "; }// accessing is also )(log n)

    // Alternative way to iterate using range-based for loop
    // for (auto &pr : m) {
    //     cout << pr.first << " ";  // Print keys
    // }

//auto it = m.find(3); it will rwtuen iterator otherwise it will return m.end() log n
//m.erase(); add a safety check with this if(it!=m.end()) then only erase
    return 0;  
}
