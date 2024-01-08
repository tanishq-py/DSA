// Function to perform a single pass of Bubble Sort
void bubbleSortStep(int arr[], int n) {
    if (n <= 1) return;

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSortStep(arr, n - 1);
}

// Function to implement Bubble Sort using recursion
void bubbleSortRecursive(int arr[], int n) {
    if (n <= 1) return;

    bubbleSortStep(arr, n);
    bubbleSortRecursive(arr, n - 1);
}

