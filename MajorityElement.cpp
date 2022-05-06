int Solution::majorityElement(const vector<int> &A)
{
    int n = A.size();
    int req = n / 2;
    int maj = A[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (A[i] == maj)
        {
            count++;
        }
        else
        {
            if (count == 1)
            {
                maj = A[i];
                count = 1;
            }
            else
            {
                count--;
            }
        }
    }
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == maj)
        {
            freq++;
        }
    }
    return maj;
}
