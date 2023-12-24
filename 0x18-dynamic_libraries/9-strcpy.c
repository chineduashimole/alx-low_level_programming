#include "main.h"

/**
 * _strcpy - this function copies a string
 * @dest: the destination of the value
 * @src: the source of the value
 * return: a pointer to the destination @dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest [i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
