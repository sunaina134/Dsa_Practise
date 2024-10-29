#include <iostream>
#include <vector>
using namespace std;

void printvec(const vector<int>& v) {
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter number: ";
        cin >> x;
        v.push_back(x);
    }
    vector<int> v2 =v;//we can copy vector o(n)

    printvec(v);
    return 0;
}
