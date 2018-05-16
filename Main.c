#include <stdio.h>

main()
{
	int nt,nl,c,b;
	nt = 0;
	nl = 0;
	b = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nt;
		if (c == ' ')
			++b;
	printf("%1d\t %1d\t  %1d\n", nl, nt , b);
}