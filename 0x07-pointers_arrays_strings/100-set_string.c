#include "main.h"
/**
 * set_string - sets a value of a pointer to a string
 * @s: the pointer to be set
 * @to: the string to point to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
