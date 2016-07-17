package main
import "fmt"
func QuickSort(array []int,left,right int){
    if left >= right {
       return
    }
    temp := array[left]
    i,j := left,right
    for i < j {
        for i < j && array[j] >temp {
		j--
	}
	array[i] = array[j]
	for i<j && array[i] < temp {
		i++
	}
	array[j] = array[i]
    }
    array[j] = temp
    QuickSort(array,left,i-1)
    QuickSort(array,i+1,right)
}
func main(){
   var array  = []int{58,65,35,95,12,4,85,96,23,64}
   QuickSort(array,0,len(array)-1)
   for _,ch := range array{
	   fmt.Printf("%d  ",ch)
   }
}

