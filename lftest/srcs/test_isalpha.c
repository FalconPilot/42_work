#include <main.h>

int		diff_isalpha(int test, FILE *f)
{
	int		func;
	int		user;

	func = isalpha(test);
	user = ft_isalpha(test);
	if (func)
		func /= func;
	if (user)
		user /= user;
	if (func != user)
	{
		printf(RED "[X]" STD);
		fprintf(f, "[K.O on ISALPHA test \"\\%d\" !]\n", test);
		fprintf(f, "FUNC : %d\nUSER : %d\n\n", func, user);
	}
	else
		printf(GRE "[√]" STD);
	return (func != user);
}

int		diff_alpha_loop(FILE *f)
{
	int		i;
	int		diff;

	diff = 0;
	for (i = 60; i < 130; i+= 4)
		diff += diff_isalpha(i, f);
	return (diff);
}

int		test_isalpha(FILE *f)
{
	int		diff;

	printf("[ft_isalpha] ");
	fprintf(f, "---=(Testing ISALPHA function)=---\n\n");
	diff = 0;
	diff += diff_alpha_loop(f);
	printf("\n");
	if (!diff)
		fprintf(f, "... All OK !\n");
	return (diff);
}
