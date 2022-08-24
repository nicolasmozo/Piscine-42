#include <stdio.h>

void	remove_chr(char chr, char *str)
{
	char final[6];
	int i;

	i = 0;
	while(str[i])
	{	
		if (str[i] != chr)
		{
			final[i] = str[i];
			printf("%c\n", final[i]);
		}
		i++;
	}
	final[i] = '\0';
	//return final;
}

int main()
{	
//	char a[] = "ni co las";
//	char b[] = ' ';
	
//	char *ptr[] = a;
	//printf("%s\n",remove_chr(' ',"ni co las"));
	remove_chr(' ', "Ni co las");
	return (0);
}	
