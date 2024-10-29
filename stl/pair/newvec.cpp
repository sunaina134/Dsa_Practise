#include <bits/stdc++.h>
using namespace std;

void printvec(const vector<pair<int, int>>& v) {
    for (const auto& p : v) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl; 
}

int main() {
    vector<pair<int, int>> v;
    int n;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cout << "Enter x for pair " << i + 1 << ": ";
        cin >> x;
        cout << "Enter y for pair " << i + 1 << ": ";
        cin >> y;
        v.push_back({x, y});
    }

    cout << "The pairs are: ";
    printvec(v);  
    return 0;
}
