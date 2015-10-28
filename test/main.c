#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i;
	long long n;
	if(argc!=2)
	{
		printf("Usage :%s <integer>\n", argv[0] );
		exit(1);
	}

	n = (long long)atoi(argv[1]);
	for(i = 0; i<n; i++);
	for(i = 0; i<n; i++);
	for(i = 0; i<n; i++);
	for(i = 0; i<n; i++);
	printf("done looping.\n");

	return 0;
}