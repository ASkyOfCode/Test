#include <stdio.h>
void InsertSort(int *array,int length){
  for(int i=0;i<length;i++){
	 /* for(int j=0;j<i;j++){
	    if(array[j] > array[i]){
		    int temp = array[i];
		    int index = i;
		    for(int x=0;x<i-j;x++){
			    array[index] = array[index-1];
			    index--;
		    }
		    array[j] = temp;
		    break;
	     }
         }*/
	  int j =i;
	  int temp = array[i];
	  while(j>0 && temp < array[j-1]){
		  array[j] = array[j-1];
		  j--;
	  }
	  array[j] = temp;
   }
}
void main(){
  int array[] = {54,85,34,26,2,58,64,33,14,56};
  InsertSort(array,10);
  for(int i=0;i<10;i++){
	  printf("%d  ",array[i]);
  }
  printf("\n");
}

