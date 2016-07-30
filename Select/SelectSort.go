package main
import "fmt"
func SelectSort(array []int){
	for i:=0;i<len(array)-1;i++ {
		index := i
		for j:=i+1;j<len(array);j++ {
			if array[index] > array[j]{
				index = j;
			}
		}
		if index != i {
				array[i],array[index] = array[index],array[i]
		}
	}
}
func main(){
	var array = []int{54,85,34,26,2,58,64,33,14,56}
	SelectSort(array)
	for _,ch := range array{
		fmt.Printf("%d ",ch)
	}
	fmt.Printf("\n")
}
