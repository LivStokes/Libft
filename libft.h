#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int c);
int ft_isalnum(int c);
int isascii(int c);
int ft_isdigit(int c);
char *ft_strcat(char *s1, char *s2);
char *ft_strcpy(char *cstr, char *str);
char *ft_strdup(char *str);
unsigned int ft_strlcat(char *s1, char *s2, unsigned int n);
int ft_strlen(char *str);
char *ft_strncat(char *s1, char *s2, int n);
char *ft_strncpy(char *cstr, char *str, int n);
int ft_isprint(int c);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *to, const void *from, size_t n);


#endif