#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n,*v;
	
	//�гyn���H����� 
	n = 10;
	v = (int*) malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		v[i] = rand() % 100;
		printf("%d,",v[i]);
	}
	printf("\n");
}
