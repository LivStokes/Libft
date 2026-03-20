# Libft
42 school's first project, libft, is about learning how the standard functions of C programming work, by coding them from scratch and creating a personal library.

## Usage
make all to compile functions.
make clean to clean the files by removing object files.

## Functions
The functions of libft are from the standard C library or other useful functions. They are mostly useful for character, string and memory manipulation.

### Functions to check and manipulate characters:
ft_isalpha <br/> 
ft_isdigit <br/> 
ft_isalnum <br/>
ft_isascii <br/>
ft_isprint <br/>
ft_toupper <br/>
ft_tolower <br/>

### Functions to manipulate strings:
ft_strlen <br/>
ft_strlcpy <br/>
ft_strlcat <br/>
ft_strchr <br/>
ft_strrchr <br/>
ft_strncmp <br/>
ft_strnstr <br/>
ft_substr <br/>
ft_strjoin <br/>
ft_strtrim <br/>
ft_split <br/>
ft_strmapi <br/>
ft_striteri <br/>

### Functions to manipulate memory:
ft_calloc <br/>
ft_memset <br/>
ft_bzero <br/>
ft_memcpy <br/>
ft_memmove <br/>
ft_memchr <br/>
ft_memcmp <br/>
ft_strdup <br/>

### Functions for numbers:
ft_atoi <br/>
ft_itoa <br/>

### Functions to write to a file descriptor:
ft_putchar_fd <br/>
ft_putstr_fd <br/>
ft_putendl_fd <br/>
ft_putnbr_fd <br/>

### Functions that deal with list manipulation:
ft_lstnew <br/>
ft_lstadd_front <br/>
ft_lstsize <br/>
ft_lstlast <br/>
ft_lstadd_back <br/>
ft_lstdelone <br/>
ft_lstclear <br/>
ft_lstiter <br/>
ft_lstmap <br/>


## Function name, Prototype, Description
### Part 1

**ft_memset**
> void *memset(void *b, int c, size_t len); 
- writes len bytes of value c (converted to an unsigned char) to the string b.

**ft_bzero**
> void bzero(void *s, size_t n); 
- writes n zeroed bytes to the string s.

**ft_memcpy**
> void *memcpy(void *dst, const void *src, size_t n); 
- copies n bytes from memory area src to memory area dst. The memory areas must not overlap.

**ft_memmove**
> void *memmove(void *dst, const void *src, size_t len); - copies len bytes from string src to string dst. The memory areas may overlap; the copy is always done in a non-destructive manner.

**ft_memchr**
> void *memchr(const void *s, int c, size_t n); 
- locates the first occurrence of c (converted to an unsigned char) in string s.

**ft_memcmp**
> int memcmp(const void *s1, const void *s2, size_t n); 
- compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long.

**ft_strlen**
> size_t strlen(const char *s); - calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').

**ft_strlcpy**
> size_t strlcpy(char *dst, const char *src, size_t dstsize); 
- copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

**ft_strlcat**
> size_t strlcat(char *dst, const char *src, size_t dstsize); 
- appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

**ft_strchr**
> char *strchr(const char *s, int c); 
- locates the first occurrence of c (converted to a char) in the string pointed to by s. The terminating null character is considered to be part of the string.

**ft_strrchr**
> char *strrchr(const char *s, int c); 
- identical to strchr(), except it locates the last occurrence of c.

**ft_strnstr**
> char *strnstr(const char *haystack, const char *needle, size_t len); 
- locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.

**ft_strncmp**
> int strncmp(const char *s1, const char *s2, size_t n); 
- compares not more than n characters.

**ft_atoi**
> int atoi(const char *str); 
- converts the initial portion of the string pointed to by str to int representation.

**ft_isalpha**
> int isalpha(int c); 
- tests for any character for which isupper(3) or islower(3) is true.

**ft_isdigit**
> int isdigit(int c); 
- tests for a decimal digit character.

**ft_isalnum**
> int isalnum(int c); 
- tests for any character for which isalpha(3) or isdigit(3) is true.

**ft_isascii**
> int isascii(int c); 
- tests for an ASCII character, which is any character between 0 and octal 177 inclusive.

**ft_isprint**
> int isprint(int c); 
- tests for any printing character, including space (` ').

**ft_toupper**
> int toupper(int c); 
- converts a lower-case letter to the corresponding upper-case letter.

**ft_tolower**
> int tolower(int c); 
- converts an upper-case letter to the corresponding lower-case letter.

**ft_calloc**
> void * calloc(size_t count, size_t size); 
- Allocates size bytes and returns a pointer to the allocated memory.

**ft_strdup**
> char *strdup(const char *s1); 
- Returns a pointer to a new string which is a duplicate of the string s.

### Part 2

**ft_substr**
> char *ft_substr(char const *s, unsigned int start, size_t len);	
- Allocates (with malloc) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.

**ft_strjoin**
> char *ft_strjoin(char const *s1, char const *s2);	
- Allocates (with malloc) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

**ft_strtrim**
> char *ft_strtrim(char const *s1, char const *set);	
- Allocates (with malloc) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

**ft_split**
> char **ft_split(char const *s, char c);	
- Allocates (with malloc) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.

**ft_itoa**
> char *ft_itoa(int n);	
- Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled.

**ft_strmapi**	
> char *ft_strmapi(char const *s, char (*f)(unsigned int, char));	
- Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.

**ft_putchar_fd**	
> void ft_putchar_fd(char c, int fd);	
- Outputs the character ’c’ to the given file descriptor.

**ft_putstr_fd**	
> void ft_putstr_fd(char *s, int fd);	
- Outputs the string ’s’ to the given file descriptor.

**ft_putendl_fd**	
> void ft_putendl_fd(char *s, int fd);	
- Outputs the string ’s’ to the given file descriptor, followed by a newline.

**ft_putnbr_fd**
> void ft_putnbr_fd(int n, int fd);	
- Outputs the integer ’n’ to the given file descriptor.

### Part 3

**ft_lstnew**
> t_list *ft_lstnew(void *content);	
- Allocates (with malloc) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.

**ft_lstadd_front**	
> void ft_lstadd_front(t_list **lst, t_list *new);	
- Adds the element ’new’ at the beginning of the list.

**ft_lstsize**
> int ft_lstsize(t_list *lst);	
- Counts the number of elements in a list.

**ft_lstlast**
> t_list *ft_lstlast(t_list *lst);	
- Returns the last element of the list.

**ft_lstadd_back**
> void ft_lstadd_back(t_list **lst, t_list *new);	
- Adds the element ’new’ at the end of the list.

**ft_lstdelone**
> void ft_lstdelone(t_list *lst, void (*del)(void*));	
- Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.

**ft_lstclear**
> void ft_lstclear(t_list **lst, void (*del)(void*)); 
- Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.

**ft_lstiter**
> void ft_lstiter(t_list *lst, void (*f)(void *)); 
- Iterates the list ’lst’ and applies the function ’f’ to the content of each element.

**ft_lstmap** 
> t_list *ft_lstmap(t_list *lst, void *(*f)(void *),　void (*del)(void *)); 
- Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.