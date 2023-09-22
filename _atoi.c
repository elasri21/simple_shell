#include "shell.h"
/**
 * interactive - return boolean value
 * @info: structure
 * Return: 1 or 0
 */
int interactive(info_t *info)
{
return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
 * is_delim - looking for delimeter
 * @c: character to check
 * @delim: delimeter
 * Return: 1 or 0
 */
int is_delim(char c, char *delim)
{
while (*delim)
if (*delim++ == c)
return (1);
return (0);
}
/**
 *_isalpha - looking for alphabet characters
 *@c: character to check
 *Return: 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
/**
 *_atoi - makes integer from strings
 *@s: string to convert
 *Return: 0 on failure
 */
int _atoi(char *s)
{
int i, sign = 1, flag = 0, output;
unsigned int result = 0;
for (i = 0;  s[i] != '\0' && flag != 2; i++)
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
flag = 1;
result *= 10;
result += (s[i] - '0');
}
else if (flag == 1)
flag = 2;
}
if (sign == -1)
output = -result;
else
output = result;
return (output);
}

