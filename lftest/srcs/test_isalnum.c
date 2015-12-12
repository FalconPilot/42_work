#include <main.h>

int		diff_isalnum(int test, FILE *f)
{
	int		func;
	int		user;

	func = isalnum(test);
	user = ft_isalnum(test);
	if (func)
		func /= func;
	if (user)
		user /= user;
	if (func != user)
	{
		printf(RED "[X]" STD);
		fprintf(f, "[K.O on ISALNUM test \"\\%d\" !]\n", test);
		fprintf(f, "FUNC : %d\nUSER : %d\n\n", func, user);
	}
	else
		printf(GRE "[√]" STD);
	return (func != user);
}

int		diff_alnum_loop(FILE *f)
{
	int		i;
	int		diff;

	diff = 0;
	for (i = 50; i < 130; i+= 4)
		diff += diff_isalnum(i, f);
	return (diff);
}

int		test_isalnum(FILE *f)
{
	int		diff;

	printf("[ft_isalnum] ");
	fprintf(f, "---=(Testing ISALNUM function)=---\n\n");
	diff = 0;
	diff += diff_alnum_loop(f);
	printf("\n");
	if (!diff)
		fprintf(f, "... All OK !\n");
	return (diff);
}
