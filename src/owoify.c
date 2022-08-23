/***************
 * OwOifier
 * by WalleBot
 * Modified: 
 * 8-23-2022
 **************/
#include <stdio.h>
#include <string.h>

char owoify(char character)
{
	// Change 'L' and 'R' to 'W'
	if(character == 'L' || character == 'R')
	{
		return 'W';
	}
	// Change 'l' and 'r' to 'w'
	else if(character == 'l' || character == 'r')
	{
		return 'w';
	}
	// Send back as-is if no match
	else
	{
		return character;
	}
}
int main(int argc, char **argv)
{
	char input[BUFSIZ];
	char *n = "";
	if(argc != 1)
	{
		printf("Usage: %s\n", argv[0]);
		return 1;
	}
	while(n != NULL)
	{
		n = fgets(input, BUFSIZ, stdin);
		if(n == NULL) break;
		for(unsigned int i = 0; i < strlen(input); i++)
		{
			// Special case: check if previous char was 'N'/'n' as well as current char being 'O'/'o'
			if(i > 0 && (input[i - 1] == 'N' || input[i - 1] == 'n'/* || input[i - 1] == 'M' || input[i - 1] == 'm'*/) && (input[i] == 'O' || input[i] == 'o'))
			{
				// Print out 'yo' instead of 'o'
				if(input[i] == 'O')
				{
					printf("YO");
				}
				else if(input[i] == 'o')
				{
					printf("yo");
				}
			}
			// Without special cases, do a simple OwO translation.
			else
			{
				printf("%c", owoify(input[i]));
			}
		}
	}
	return 0;
}
