#include "main.h"

/**
 * *_realloc - this function allocates a memory block using malloc and free
 * @ptr: a pointer to the memory allocated with the old size malloc
 * @old_size: size (bytes) of the allocated space for ptr
 * @new_size: size (bytes) of the new memory block
 * Return: if new_size is 0 and ptr is not NULL, return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p+i) = *((char *)ptr + i);
		free(ptr);
	}

	return (p);
}
