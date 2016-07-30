#include <stdio.h> 
void XiErSort(int *array,int length){
   int span = length/2;
   while(span > 0){
	   for(int i = 0;i<span;i++){
		   for(int j=i;j<length;j+=span){
			   int index = j;
			   int temp = array[j];
			   while(index > i && temp < array[index-span]){
				   array[j] = array[j-span];
				   index-=span;
			   }
			   array[index] = temp;
		   }
	   }
	   span = span/2;
   }
}
void main(){
	const int array_length = 10;
	int array[] = {42,56,35,24,86,94,3,55,76,12};
	XiErSort(array,array_length);
	for(int i=0;i<array_length;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}
