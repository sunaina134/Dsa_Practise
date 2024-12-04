int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

int hash[13]={0};
for(int i=0;i<n;i++){
    hash[arr[i]]++;
}


    int q;
    cin>>q;
    while(q--){
int nm;
cin>>nm;
cout<<has[nm];
    }
    return 0;
}