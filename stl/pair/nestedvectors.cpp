#include <bits/stdc++.h>
using namespace std;

void printvec(const vector<vector<int>>& v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";  // Print each element followed by a space
        }
        cout << endl;  // Print a newline after each row
    }
}

int main() {
    vector<vector<int>> v;
    int N;

    cout << "Enter number of rows: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        int n;
        cout << "Enter number of columns for row " << i + 1 << ": ";
        cin >> n;
        
        vector<int> m;
        cout << "Enter elements for row " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            int c;
            cin >> c;
            m.push_back(c);
        }
        v.push_back(m);
    }

    cout << "The 2D vector is:\n";
    printvec(v);  
    return 0;
}
