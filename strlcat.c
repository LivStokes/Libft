unsigned int ft_strlcat(char *s1, char *s2, unsigned int n)
{
    int i = 0;
    int j = 0;
    while (s1[i])
        i++;
    while (s2[j])
        j++;
    if (n < i)
        return (n + j);
}