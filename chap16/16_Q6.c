#include <malloc.h>

int main()
{
	char ***p = (char ***)malloc(sizeof(char **) * 2);
	int i, j;

	for(i = 0; i < 2; i++) {
		*(p + i) = (char **)malloc(sizeof(char *) * 3);
		for(j = 0; j < 3; j++) {
			*(*(p + i) + j) = (char *)malloc(sizeof(char) * 4);
		}
	}

	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			free(*(*(p + i) + j));
		}
		free(*(p + i));
	}
	free(p);

	return 0;
}