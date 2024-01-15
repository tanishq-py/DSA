// You are given two integers 'n', and 'm'.
// Calculate 'gcd(n,m)', without using library functions.

//O(n) soln
int calcGCD(int n, int m){
    int gcd=min(n,m);
    while(gcd>=2){
        if(n%gcd==0&&m%gcd==0) return gcd;
        gcd--;
    }
}

//o(log(n))
int calcGCD(int n, int m) {
    if (n == 0) return m;
    return calcGCD(m % n, n);
}

