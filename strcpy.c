char *strcpy(char *cstr, char *str)
{
    int i = 0;
    while (str[i])
    {
        cstr[i] = str[i];
        i++;
    }
    cstr[i] = '\0';
    return (cstr);
}