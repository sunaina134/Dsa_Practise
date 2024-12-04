#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=8;
    int c=4;

    if(a>b){
        if(a>c){
            cout<<"a";
        }
        else{
            cout<<"b";
        }
    }
    else{
        if(b>c){
            cout<<"b";
        }
        else{
            cout<<"c";
        }
    }
    return 0;
}