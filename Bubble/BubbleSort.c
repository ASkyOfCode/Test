#include <stdio.h>
void BubbleSort(int *array,int length){
   for(int i=0;i<length-1;i++){
	   int judge = -1;
	   for(int j=0;j<length-i-1;j++){
		   if(array[j] > array[j+1]){
			   int temp = array[j];
			   array[j] = array[j+1];
		       array[j+1] = temp;
		       judge = 1;
		   }
	   }
	   if(judge == -1){
		   break;
	   }
   }
}
void main(){
	const int array_length = 10;
	int array[] = {54,85,34,26,2,58,64,33,14,56};
	BubbleSort(array,array_length);
	for(int i=0;i<array_length;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}
