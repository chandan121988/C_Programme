// C program to copy the string using
// memcpy function
#include <stdio.h>
#include <string.h>

// Driver Code
int main()
{
	char s1[20] = "GeeksforGeeks";
	char s2[20];

	// Function
	memcpy(s2, s1, strlen(s1));

	printf("%s\n", s2);

	return 0;
}
