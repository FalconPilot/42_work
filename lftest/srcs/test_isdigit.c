#include <main.h>

int		diff_isdigit(int test, FILE *f)
{
	int		func;
	int		user;

	func = isdigit(test);
	user = ft_isdigit(test);
	if (func != user)
	{
		printf(RED "[X]" STD);
		fprintf(f, "[K.O on ISDIGIT test \"\\%d\" !]\n", test);
		fprintf(f, "FUNC : %d\nUSER : %d\n\n", func, user);
	}
	else
		printf(GRE "[√]" STD);
	return (func != user);
}

int		diff_digit_loop(FILE *f)
{
	int		i;
	int		diff;

	diff = 0;
	for (i = 45; i < 62; i++)
		diff += diff_isdigit(i, f);
	return (diff);
}

int		test_isdigit(FILE *f)
{
	int		diff;

	printf("[ft_isdigit] ");
	fprintf(f, "---=(Testing ISDIGIT function)=---\n\n");
	diff = 0;
	diff += diff_digit_loop(f);
	printf("\n");
	if (!diff)
		fprintf(f, "... All OK !\n");
	return (diff);
}
