#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - calls exit on failure
 * @b: number of bytes to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (!pointer)
		exit(98);
	return (pointer);
}
