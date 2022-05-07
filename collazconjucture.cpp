long Solution::solve(int A, int B) {
    long ans = A;
    for (int i = 1; i < B; i++) {
        if (ans % 2) {
            ans = 3 * ans + 1;
        } else {
            ans /= 2;
        }
    }
    return ans;
}
