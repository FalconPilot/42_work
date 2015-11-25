

#include <string.h>
#include <stdlib.h>

char	*strdup(const char *s1)
{
	int		i;
	int		size;
	char	*copy;

	i = 0;
	size = 0;
	while (s1[size])
		size++;
	copy = malloc(sizeof(char) * size + 1);
	while (i < size)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
