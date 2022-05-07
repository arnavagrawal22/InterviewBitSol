const int MOD = 10003;
bool isVowel(char A) {
    bool res = true;
    switch (A) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            res = true;
            break;
        default:
            res = false;
            break;
    }
    return res;
}

int Solution::solve(string A) {
    int count = 0;
    int N = A.length();
    for (int i = 0; i < N; ++i) {
        if (isVowel(A[i])) {
            count += N - i;
        }
    }
    return count%MOD;
}