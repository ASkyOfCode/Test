#include <stdio.h>
void SelectSort(int *array,int length){
   for(int i=0;i<length-1;i++){
       int index = i;
	   for(int j=i+1;j<length;j++){
		     if(array[index] > array[j]){
			     index = j;
		      }
	        }
      	   if(index != i){
 			   int temp = array[i];
			   array[i] = array[index];
			   array[index] = temp;
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
