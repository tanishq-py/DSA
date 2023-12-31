int lowerBound(const vector<int>& arr, int n, int x) {
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

int upperBound(const vector<int>& arr, int n, int x) {
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

pair<int, int> firstAndLastPosition(const vector<int>& arr, int n, int k) {
    int lb = lowerBound(arr, n, k);
    int ub = upperBound(arr, n, k);

    if (lb == n || arr[lb] != k) return {-1, -1};
    return {lb, ub - 1};
}

int count(const vector<int>& arr, int n, int x) {
    pair<int, int> ans = firstAndLastPosition(arr, n, x);
    if (ans.first == -1) return 0;
    return ans.second - ans.first + 1;
}
