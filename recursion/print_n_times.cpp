#include<bits/stdc++.h>
using namespace std;
int name(int i, int a){
    if(i>a){
        return 0;
    }
    cout<<i<<endl;
    name(i+1,a);
}

int main(){
    int n;
    cin>>n;
    int i=0;
    name(i,n);
    return 0;
}
