#include "main.h"
/**
 * _strcat - concatenates the string to by @src to
 * the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int jest = 0, dest_len = 0;

	while (dest[jest++])
		dest_len++;

	for (jest = 0; src[jest]; jest++)
		dest[dest_len++] = src[jest];

	return (dest);
}
