package main;
import "fmt"
func BubbleSort(array []int){
  for i:=0;i<len(array)-1;i++{
	  judge := -1
	  for j:=0;j<len(array)-i-1;j++{
         if array[j] > array[j+1]{
			 temp := array[j]
			 array[j] =array[j+1]
			 array[j+1] = temp
		     judge = 1
		 }
	  }
	  if judge == -1{
		  break
	  }
  }
}
func main(){
	var array =[]int{54,85,34,26,2,58,64,33,14,56};
	BubbleSort(array)
	for _,ch := range array{
		fmt.Printf("%d ",ch)
	}
	fmt.Printf("\n")
}
