#include "stdio.h"
#include "time.h"
#include <stdlib.h>
void quick_median(int s[10],int left,int right);

int main(){
	int s[10]={-1},i,num = 9,a;
	//�гy�@�նü�
	srand(time(NULL));
	for (int i = 0; i < num; i++){
	s[i]=rand()%100;
	}
	for (i = 0; i < num; i++){
	printf("%d\t",s[i]);
	}
	printf("\n");
	quick_median(s,0,num-1);


}
//�ֳt�䤤��ƪk(median) 
//�Ĥ@��pivot�Ƨ�����,���pivot�P����Ʀ�m���t�Z,�q�o�t�Z�h�M�䤤��� 

void quick_median(int s[10],int left,int right)
{ 
	  if(right>left){
		    int i,b,a = left-1;
			for (i=left;i<=right;i++){
					
					if(s[i]<=s[right]){
					    a++;
						b=s[i];
						s[i]=s[a];
						s[a]=b;
				    }
				printf("\na=%d\ni=%d\n",a,i);
				for (int j = 0; j < 9; j++){
				printf("%d\t",s[j]);
				}
				printf("\n");
            }
            
      		if(a>4){
	            quick_median(s, left , a-1);
	            
		    }else if(a<4){
		        quick_median(s, a+1, right);	
		    }else if(a=4){
		    	printf("median_1 = %d\n",s[a]);         //�Ƨǳ~����npivot�w�g�b������m,�����N�O����� 
			}
			
	   }else if(left = right){
	   	    printf("median_2 = %d",s[4]);                  
	   	    printf("\n");
	   }

}





































