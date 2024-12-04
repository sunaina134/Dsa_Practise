#include<iostream>
using namespace std;
int main(){
    int x= 87481234;
     int rev;
    int  n=x;
    while(n!=0){
        int ld= n%10;
        int rev = rev * 10 +ld;
        n=n/10;
    }
    cout<< n;
}