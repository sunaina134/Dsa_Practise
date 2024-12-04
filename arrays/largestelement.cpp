int main(){
    int arr[6]={2,5,6,8,1,4};
    int maxx= arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>maxx){
            maxx=arr[i];
        }
    }
    cout<<maxx;
    return 0;
}