#include "main.h"

/* rev_string */
char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	;

	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/* write_base */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_write(str[i]);
}
