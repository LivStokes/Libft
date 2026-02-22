char *ft_strncpy(char *cstr, char *str, int n)
{
    int i = 0;
    while (str[i] && i < n)
    {
        cstr[i] = str[i];
        i++;
    }
    cstr[i] = '\0';
    return (cstr);
}