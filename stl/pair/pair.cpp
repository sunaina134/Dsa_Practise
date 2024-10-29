#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, string> p;
    p = make_pair(2, "abc");
    p = {2, "abc"};
    pair<int, string> p1 = p; // Copying p to p1
    p1.first = 3; // Modifying p1
    cout << p.first << " " << p.second << endl; // Should print "2 abc"

    // Array of pairs
    pair<int, int> p_array[3];
    p_array[0] = {1, 2}; // Assigning a pair to the first element
    for (int i = 0; i < 1; i++) {
        cout << p_array[i].first << " " << p_array[i].second << endl; // Should print "1 2"
    }

    return 0; // Make sure to return 0
}
