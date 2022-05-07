int Solution::solve(int r, int c) {
    int tl = min(r-1,c-1);
    int bl = min(c-1,8-r);
    int tr = min(r-1,8-c);
    int br = min(8-r,8-c);
    return tl + bl + tr + br;
}
