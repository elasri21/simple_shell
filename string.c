#include "shell.h"
/**
 * _strlen - get string length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}
/**
 * _strcmp - compares two strings
 * @s1: first strang
 * @s2: second strang
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}
if (*s1 == *s2)
return (0);
else
return (*s1 < *s2 ? -1 : 1);
}
/**
 * starts_with - check if a string start with another string
 * @haystack: big string
 * @needle: small string to look at
 * Return: pointer address
 */
char *starts_with(const char *haystack, const char *needle)
{
while (*needle)
if (*needle++ != *haystack++)
return (NULL);
return ((char *)haystack);
}
/**
 * _strcat - concatination of strings
 * @dest: destination
 * @src: source
 * Return: new string
 */
char *_strcat(char *dest, char *src)
{
char *ret = dest;
while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = *src;
return (ret);
}

