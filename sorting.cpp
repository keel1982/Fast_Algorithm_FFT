#include "stdio.h"
#include "time.h"
#include <stdlib.h>
void quick_sort(int *s,int left,int right);

int main(){
	int s[10]={-1},i,num = 5;
	//�гy�@�նü� 
	srand(time(NULL));
	for (int i = 0; i < num; i++){
		s[i]=rand()%100;  
	}
	for (i = 0; i < num; i++){
		printf("%d\t",s[i]); 
	}

	quick_sort(s,0,num-1);
	printf("\n");
	
	for ( i = 0; i < num; i++){
		printf("%d\t",s[i]); 
	}
	printf("\n");
    
}
    //�ֳt�ƧǪk
    /*���@�ӼаO(a=-1����m),��Ʀr�p��pivot��,�аO�[�@ ,��аO�j��pivot�ɼаO�O���Ӧ�m 
	  �M��for�j���~�����U�h,������p��pivot��,���ɳo�Ӧ�m�P���аO���ȥ洫,��j�����
	  ����pivot��аO�I�洫,�o�˥i�H�wpivot���X���k��Ӥj��p��pivot�����p */ 
	  
void quick_sort(int *s,int left,int right)
{
	int a=-1,b=0,i,j,num=5;
	int pivot = s[right];

	for (i=0;i<num;i++){
		
		if(s[i]<=pivot){
			a++;
			if(i!=0 ){
				
				b=s[i];
				s[i]=s[a];
				s[a]=b;
				
			}
		}
		printf("\na=%d\ni=%d\n",a,i);
		for (int j = 0; j < num; j++){
			printf("%d\t",s[j]); 
		}
		
	}
	if(b==0){
		b=s[i];
		s[i]=s[a];
		s[a]=b;
	}
    //quick_sort(s, left,  a - 1);
    //quick_sort(s, a + 1, right);
}

//�٤��ӷ|�b��Ƹ̦A������ ,�u������βĤ@����pivot������ 




















