#include <main.h>

int		diff_atoi(char *test, FILE *f)
{
	int		func;
	int		user;

	func = atoi(test);
	user = ft_atoi(test);
	if (func != user)
	{
		printf(RED "[X]" STD);
		fprintf(f, "[K.O on ATOI test \"%s\" !]\n", test);
		fprintf(f, "FUNC : %d\nUSER : %d\n\n", func, user);
	}
	else
		printf(GRE "[√]" STD);
	return (func != user);
}

int		test_atoi(FILE *f)
{
	int		diff;

	printf("[ft_atoi] ");
	fprintf(f, "---=(Testing ATOI function)=---\n\n");
	diff = 0;
	diff += diff_atoi("123", f);
	diff += diff_atoi("12a3", f);
	diff += diff_atoi("        55", f);
	diff += diff_atoi("-123", f);
	diff += diff_atoi("+123", f);
	diff += diff_atoi("       -155ab5", f);
	diff += diff_atoi("\t     \r\t\t  555    \t", f);
	diff += diff_atoi("-2147483648", f);
	diff += diff_atoi("-65-12", f);
	diff += diff_atoi("+65+12", f);
	diff += diff_atoi("+65-12", f);
	diff += diff_atoi("-65+12", f);
	printf("\n");
	if (!diff)
		fprintf(f, "... All OK !\n");
	return (diff);
}
