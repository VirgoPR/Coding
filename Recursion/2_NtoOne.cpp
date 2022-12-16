#include <iostream>
using namespace std;

// void pri(int i, int n){
//     if(i>n || i==0)return ;
//     cout << i << " " ;
//     pri(i-1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     pri(n,n);
// }


void pri(int i){
    if(i<1)return ;
    cout << i << " " ;
    pri(i-1);
}

int main(){
    int n;
    cin>>n;
    pri(n);
}
