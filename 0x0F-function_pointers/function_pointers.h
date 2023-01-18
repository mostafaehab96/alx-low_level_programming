#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, unsigned int size, void (*action)(int));

#endif
