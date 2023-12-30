#include<bits/stdc++.h>
using namespace std;
int sum(int a){
    if(a==0){
        return 0;
    }
    return a+ sum(a-1);}

int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}

//2nd method
long long sumFirstN(long long n) {
    static long long sum = 0;  
    static int i = 1;  

    if (n <= 0) return sum;

    sum = sum + i; 
    i++;         
    return sumFirstN(n - 1);
}

