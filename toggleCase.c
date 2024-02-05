#include <stdio.h>

int main()
{
	char sentence[150];
	int i;

	printf("Enter the sentence: ");
	gets(sentence);

	for(i=0; sentence[i]!='\0'; ++i)
	{
		if(sentence[i]>='A' && sentence[i]<='Z')
			sentence[i] = sentence[i] + 32;
		else if(sentence[i]>='a' && sentence[i]<='z')
			sentence[i] = sentence[i] - 32;
	}

	printf(" toggle case
        : %s\n", sentence);

	return 0;
}
