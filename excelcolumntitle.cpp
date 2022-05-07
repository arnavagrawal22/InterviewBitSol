string Solution::convertToTitle(int n) {
    string s;
     while (n > 0) {
        int rem = n % 26;
        if (rem == 0) {
            s.push_back('Z');
            n = (n / 26) - 1;
        }
        else // If remainder is non-zero
        {
            s.push_back((rem - 1) + 'A');
            n = n / 26;
        }
    }
    reverse(s.begin(),s.end());
    return s;
}
