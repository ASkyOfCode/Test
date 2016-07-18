#include <stdio.h>
void SelectSort(int *array,int length){
   for(int i=0;i<length-1;i++){
	   for(int j=i+1;j<length;j++){
		   if(array[i] > array[j]){
			   int temp = array[i];
			   array[i] = array[j];
			   array[j] = temp;
		   }
	   }
   }
}
void main(){
	int array[] = {25,68,54,2,95,48,63,47,82,12};
	SelectSort(array,10);
	for(int i=0;i<10;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}
