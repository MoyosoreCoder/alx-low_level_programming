#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
int main(void)
{
	char *s = "Datastructures";

	printf("%lu\n", hash_djb2((unsigned char *)s));
	return (EXIT_SUCCESS);
}
