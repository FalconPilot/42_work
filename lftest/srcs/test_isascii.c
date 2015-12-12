#include <main.h>

int		diff_isascii(int test, FILE *f)
{
	int		func;
	int		user;

	func = isascii(test);
	user = ft_isascii(test);
	if (func != user)
	{
		printf(RED "[X]" STD);
		fprintf(f, "[K.O on ISASCII test \"\\%d\" !]\n", test);
		fprintf(f, "FUNC : %d\nUSER : %d\n\n", func, user);
	}
	else
		printf(GRE "[√]" STD);
	return (func != user);
}

int		diff_ascii_loop(FILE *f)
{
	int		i;
	int		diff;

	diff = 0;
	for (i = -5; i < 50; i+= 5)
		diff += diff_isascii(i, f);
	for (i = 120; i < 130; i++)
		diff += diff_isascii(i, f);
	return (diff);
}

int		test_isascii(FILE *f)
{
	int		diff;

	printf("[ft_isascii] ");
	fprintf(f, "---=(Testing ISASCII function)=---\n\n");
	diff = 0;
	diff += diff_ascii_loop(f);
	printf("\n");
	if (!diff)
		fprintf(f, "... All OK !\n");
	return (diff);
}
