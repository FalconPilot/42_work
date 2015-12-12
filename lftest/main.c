#include <main.h>

void	main_header(FILE *f)
{
	printf(YEL "\n=====================\n");
	printf("Libft testing session\n");
	printf("=====================\n\n" STD);
	fprintf(f, "\nTesting reports\n\n");
}

int		main(void)
{
	FILE	*f;
	int		diff;

	f = fopen("/tmp/lftest.log", "wa+");
	diff = 0;
	main_header(f);
	diff += test_atoi(f);
	diff += test_isdigit(f);
	if (diff)
		printf(RED "%d tests failed (check /tmp/lftest.log)\n" STD, diff);
	else
		printf(GRE "All tests OK !\n" STD);
	fclose(f);
	return (0);
}
