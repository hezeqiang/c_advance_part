/* malloc example: random string generator*/
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */

int main()
{
	int i, n;
	char * buffer;

	printf("How long do you want the string? ");
	scanf("%d", &i);

	buffer = (char*)malloc(i + 1);//give the buffer the adress the of the space, whose momery scale is i+1
	//the momery can only for char type variables
	if (buffer == NULL) exit(1);//if there is no memory, then the program exit.
	//this part is necessary for the program

	for (n = 0; n<i; n++)
		buffer[n] = rand() % 26 + 'a';
	buffer[i] = '\0';
	//end with \0

	printf("Random string: %s\n", buffer);
	free(buffer);

	return 0;
}