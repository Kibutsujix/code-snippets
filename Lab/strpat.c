// pattern matching in strings

#include <stdio.h>
#include <string.h>

void pat_search(char* pat, char* txt)
{
	int M = strlen(pat);
	int N = strlen(txt);

	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) 
	{
		int j;

		/* For current index i, check for pattern match */
		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;

		if (j == M) 
			printf("Pattern found at index %d \n", i);
	}
}

/* Driver program to test above function */
int main()
{
  char text[20], pat[10];
  printf("Enter the text : ");
  gets(text);
  printf("Enter the pattern to be searched : ");
  gets(pat);
  pat_search(pat,text);
  return 0;
}