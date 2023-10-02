#include "main.h"

/**
 * _strdup - returns pointer to string duplicate
 * @str: pointer to string
 * Return: pointer to copy. NULL if str = NUL.
*/

char *_strdup(char *str)
{
    unsigned int i;
    char *ch;

    ch = (char *)malloc(sizeof(str));
    if (str == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < sizeof(str); i++)
    {
        ch = str;
    }
    free(ch);
    return (ch);
}