#include <iostream>
using namespace std;

void pri(int i, int n){
    //base case
    if(i>n)return;
    //cout<< i ;
    printf("%d ",i);
    pri(i+1, n);
}

int main(){
    int n;
    cin>>n;
    pri(1,n);
}
