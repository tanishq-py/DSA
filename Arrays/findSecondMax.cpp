//brute
//sort array, if(arr[n-1]==arr[n-2]) for(i=n-2;i>0;i--){if(arr[i]!=arr[n-1]) smax=arr[i];};

//You have been given an array ‘a’ of ‘n’ unique non-negative integers.
//Find the second largest and second smallest element from the array.
//Return the two elements (second largest and second smallest) as another array of size 2.
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    int smax = min;
    int smin = max;
    for (int i = 0; i < n; i++) {
        if (a[i] > smax && a[i] < max) {
            smax = a[i];
        }
        if (a[i] < smin && a[i] > min) {
            smin = a[i];
        }
    }
    return {smax, smin};
}





