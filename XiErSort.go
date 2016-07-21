package main
import "fmt"
func XiErSort(array []int){
   span := len(array)/2
   for span>0 {
	   for i:=0;i<span;i++ {
		   for j:=i;j<len(array);j+=span {
			    index := j
				temp := array[j]
			   for index > i && temp<array[index-span] {
				   array[index] = array[index - span]
				   index-=span
			   }
			   array[index] = temp;
		   }
	   }
	   span = span/2
   }
}
func main(){
  var array =[]int{42,56,35,24,86,94,3,55,76,12}
  XiErSort(array)
  for _,ch := range array{
	  fmt.Printf("%d ",ch)
  }
  fmt.Printf("\n")
}
