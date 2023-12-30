//Given an array ‘arr’ of size ‘n’ find the largest element in the array.
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max) swap(arr[i],max);
    }
    return max;
}
