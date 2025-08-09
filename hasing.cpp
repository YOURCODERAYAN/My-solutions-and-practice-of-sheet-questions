#include<bits/stdc++.h>
using namespace std;
void fibo(int n,int a,int b){
    if(n>0){
     fibo(n-1,b,a+b);
     cout << a << " " ;
    }
}
int main(){
    int N;
    N=10;
    fibo(N,0,1);
    return 0;
}