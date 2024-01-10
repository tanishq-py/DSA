//You are given a positive integer n. Your task is to find and return its square root. 
//If ‘n’ is not a perfect square, then return the floor value of ‘sqrt(n)’.

//brute force
int floorSqrt(int n) {
    int ans = 0;
    //linear search on the answer space:
    for (long long i = 1; i <= n; i++) {
        long long val = i * i;
        if (val <= n * 1ll) {
            ans = i;
        } else {
            break;
        }
    }
    return ans;
}


//optimal sol 1 (logN)
int floorSqrt(int n) {
    int ans = sqrt(n);
    return ans;
}

//optimal sol 2
int floorSqrt(int n) {
    int low = 1, high = n;
    //Binary search on the answers:
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= (long long)(n)) {
            //eliminate the left half:
            low = mid + 1;
        }
        else {
            //eliminate the right half:
            high = mid - 1;
        }
    }
    return high;
}


