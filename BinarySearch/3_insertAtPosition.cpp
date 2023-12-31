int searchInsert(vector<int>& arr, int m)
{
	int l = 0, h = arr.size() - 1;
    int ans = arr.size();  

    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (arr[mid] >= m) {
            ans = mid;
            h = mid - 1;  
        } else {
            l = mid + 1;  
        }
    }

    return ans;
}
