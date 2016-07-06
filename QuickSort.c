#include <stdio.h>
void QuickSort(int *array,int left,int right){
    if(left >= right){
      return;
    }
    int i = left;
    int j = right;
    int temp = array[left];
    while(i < j){
      while( i < j && array[j] >= temp){
         j--;
      }
      array[i]=array[j];
      while(i<j && array[i] <= temp){
         i++;
      }
      array[j]=array[i];
    }
    array[i] = temp;
    QuickSort(array,left,i-1);
    QuickSort(array,i+1,right);
}
void main(){
	int array[] = {54,25,65,43,56,25,3,67,98};
	QuickSort(array,0,8);
	for(int i=0;i<9;i++){
		printf("%d   ",array[i]);
	}
	printf("\n");
}
