#ifndef _main_h_
#define _main_h_

/**
 * main - main function
 * Description: The prototypes of all my functions
 * and the prototype of the function _putchar
 */

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int _atoi(const char *s);
void print_int(unsigned long int n);
void _puts(char *str);

#endif
