#ifndef _main_h_
#define _main_h_

/**
 * main - main function
 * Description: The prototypes of all my functions
 * and the prototype of the function _putchar
 */

int _putchar(char c)
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
