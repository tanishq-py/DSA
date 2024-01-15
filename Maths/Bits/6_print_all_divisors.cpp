int sumOfAllDivisors(int n) {
    int tsum = 0;

    for (int j = 1; j <= n; j++) {
        int sum = 0;
        for (int i = 1; i * i <= j; i++) {
            if (j % i == 0) {
                sum = sum + i;
                if (i != j / i) {
                    sum = sum + j / i;
                }
            }
        }
        tsum = tsum + sum;
    }
    return tsum;
}
