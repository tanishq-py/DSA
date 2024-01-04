//Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

//brute force
int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); 

    int len = 0;
    for (int i = 0; i < n; i++) { 
        for (int j = i; j < n; j++) { 
            long long s = 0;
            for (int K = i; K <= j; K++) {
                s += a[K];
            }
            if (s == k)
                len = max(len, j - i + 1);}
    }
    return len;
}


//brute force 2
int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); 
    int len = 0;
    for (int i = 0; i < n; i++) { 
        long long s = 0; 
        for (int j = i; j < n; j++) { 
            s += a[j];
            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}


//hashmap
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size(); 
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

//2 pointer
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size();.
    int left = 0, right = 0; 
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n) sum += a[right];
    }
    return maxLen;
}

//Given an array and a sum k, we need to print the length of the longest subarray that sums to k. (Positive or negaative)
//same methods as above

