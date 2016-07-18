package main
import "fmt"
func SelectSort(array []int){
	for i:=0;i<len(array)-1;i++ {
		for j:=i+1;j<len(array);j++ {
			if array[i] > array[j]{
				array[i],array[j] = array[j],array[i]
			}
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
