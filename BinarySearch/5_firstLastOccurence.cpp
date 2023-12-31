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

int upperBound(vector<int> &arr, int n, int x){
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


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int lb= lowerBound(arr,n,k);
    if(lb==n || arr[lb]!=k) return{-1,-1};
    return {lb, upperBound(arr,n,k)-1};
}
