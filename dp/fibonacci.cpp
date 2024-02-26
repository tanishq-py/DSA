//brute force recusrsion 
int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibo(n-1)+ fibo(n-2);
}

int main() {
    int n;
    cin>>n;
    int r= fibo(n);
    cout<<r;
}


//with dp 
vector<int> dp;

int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibo(n-1)+ fibo(n-2);
}

int main() {
    int n;
    cin>>n;
    dp.resize(n+1, -1); 
    int r= fibo(n);
    cout<<r;
}

