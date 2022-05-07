string Solution::solve(string str) {
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            if (islower(str[i]))
                str[i] = toupper(str[i]);
            else
                str[i] = tolower(str[i]);
        }
}
return str;
}
