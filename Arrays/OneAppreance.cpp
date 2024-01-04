//Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

//brute force
int getSingleElement(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int num = arr[i]; // selected element
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == num)
                cnt++;
        }
        if (cnt == 1) return num;
    }
    return -1;
}

//hash array
int getSingleElement(vector<int> &arr) {
    int n = arr.size();
    int maxi = arr[0];
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }
    vector<int> hash(maxi + 1, 0);
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] == 1)
            return arr[i];
    }
    return -1;
}

//hashmaps
int getSingleElement(vector<int> &arr) {
    int n = arr.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    for (auto it : mpp) {
        if (it.second == 1)
            return it.first;
    }
    return -1;
}


//XOR
int getSingleElement(vector<int> &arr) {
    int n = arr.size();
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}








