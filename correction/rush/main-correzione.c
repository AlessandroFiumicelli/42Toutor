#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	int	i;

	i = 0;
	while(argc != i)
	{
		printf("%s", argv[i]);
		i++;
	}	
	return (0);
}
