#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i,n,*v;
	time_t T=1;
	int hold;
	//�гyn���H�����
	
	srand(time(&T));  //��{�b�ɶ����H���޼�,���M�|�O�T�w���@�ռƦC 
	n = 10;
	v = (int*) malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		v[i] = rand() % 100;
		printf("%d,",v[i]);
	}
	printf("\n");
    //bubble sort 
    //compare v[i] and v[j]
    //if v[i] > v[j] then v[i] <--> v[j]
    //�ѥ���k,�۾F�����,���j�̩��k��
	//�̤j�ȷ|�X�{�b�}�C�k��
	//���j�B�z�|���ƧǪ�n-1�ӭ줸��
	for(i=0;i<n;i++)
	{
		if(v[i]>v[i+1])    //�۾F����� 
		{
			hold = v[i];
			v[i] = v[i+1];
			v[i+1] = hold;
		}
    } 
    for(i=0;i<n;i++)
	{
		printf("%d,",v[i]);
	}
    
}



















