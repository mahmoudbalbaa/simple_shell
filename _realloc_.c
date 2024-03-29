#include "main.h"

/**
 **_realloc_ -  Reallocates A Memory Block Using Malloc And Free
 *@ptr: Pointer
 *@old_size: Previous Size Of The Pointer
 *@new_size: New Size Of The Pointer
 *Return: Void Pointer Rellocated Memory
 */

void *_realloc_(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_size);
	if (result == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		array_fill(result, '\0', new_size);
		free(ptr);
	}
	else
	{
		_memocpy_(result, ptr, old_size);
		free(ptr);
	}
	return (result);

}
