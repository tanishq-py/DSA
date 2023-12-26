#include<bits/stdc++.h>
using namespace std;
int main(){   
    //given a number n, return 3 integers, such that a*b*c=n & a!=b!=c!=1
    int n;
    cin>>n;
    int a=1,b=1,c=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=i;
            break;
        }
    }
    n=n/a;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(i!=a){
                b=i;
                break;
            }
        }
    }
    c=n/b;
    cout<<a<<" "<<b<<" "<<c;   
}

