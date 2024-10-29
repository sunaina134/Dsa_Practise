#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> v={{1,2},{3,4},{8,9}};
  vector<pair<int, int>>::iterator it; 
    for(it = v.begin(); it != v.end(); it++){
        cout<< it->first;
    }
    return 0;
//or
/*
for(pair<int,int> &value : v){ //in place of pair<int,int> we can use auto
cout<<value.first;
}
*/
}