#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v= {2,4,56,7};
for(int i=0;i<v.size();i++){
    cout<<v[i]<< " ";
}
vector<int> :: iterator it = v.begin();
for(it = v.begin(); it!=v.end();++it){
    cout<<(*it)<<endl;

    
}
}