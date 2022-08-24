#include <string.h>
#include <stdio.h>

int main(void)
{
	char s1 [] = "aa";
	char s2 [] = "aaaa";
	printf("%d",strncmp(s1,s2,4));
}
