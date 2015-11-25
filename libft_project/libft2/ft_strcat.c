

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	while (s1[i])
		i++;
	while (s2[i2])
	{
		s1[i] = s2[i2];
		i++;
		i2++;
	}
	return (s1);
}
