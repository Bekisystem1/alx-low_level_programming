#include "main.h"
/**
   * _strcat - concatinate two words
    * @dest: variable1
     * @src: variable2
      *
       * Return: dest
	*/
char *_strcat(char *dest, char *src)
{

	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
