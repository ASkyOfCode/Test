package main;
import "fmt"
func InsertSort(array []int){
    for i := 0;i<len(array);i++ {
	   /* for j := 0;j<i;j++ { 
	        if array[j] > array[i] {
		   temp := array[i]
		   index := i;
		   for x := 0;x<i-j;x++ {
			   array[index],array[index-1]=array[index-1],array[index]
		           index--
		   }
		   array[j] = temp
		   break
	      }
           }*/
	   j := i
	   temp := array[i]
      for j>0 && temp < array[j-1] {
		  array[j] = array[j-1]
		  j--
	  }
	  array[j] = temp
    }  
}
func main(){
   var array = []int{54,85,34,26,2,58,64,33,14,56}
   InsertSort(array)
   for _,ch := range array{
	  fmt.Printf("%d  ",ch)
   }
   fmt.Printf("\n")
}
