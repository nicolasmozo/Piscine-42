#include <unistd.h>


int check(char *file1, char *file2)
{
	if(file1[0] == file2[0])
	{
		return (1);
	}
	return (0);
}

int main(int ac, char **av)
{
	char c;

	c = 0;
	c = check(av[1], av[2]);
	c += '0';
	write (1, &c, 1);
	return (0);
}
