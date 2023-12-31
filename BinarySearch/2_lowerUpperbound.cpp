//lower bound
//smallest index such that arr[index]>=n;
int lowerBound(vector<int> arr, int n, int x) {
    int l = 0, h = n - 1;
    int ans = n;  

    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (arr[mid] >= x) {
            ans = mid;
            h = mid - 1;  
        } else {
            l = mid + 1;  
        }
    }

    return ans;
}


//upper bound
//smallest index such that arr[index]>n;
int upperBound(vector<int> &arr, int x, int n){
	int l = 0, h = n - 1;
    int ans = n;  

    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (arr[mid] > x) {
            ans = mid;
            h = mid - 1;  
        } else {
            l = mid + 1;  
        }
    }

    return ans;	
}

