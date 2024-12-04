#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={2,3,4,5,2,2};
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==2){
            cnt++;
        }
    }
    return cnt;
}