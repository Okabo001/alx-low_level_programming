#include "stdio.h"
#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *begin = haystack;
char *sub = needle;
while (*haystack && *sub && *haystack == *sub)
{
haystack++;
sub++;
}
if (!*sub)
{
return (begin);
}
haystack = begin + 1;
}
return (NULL);
}
