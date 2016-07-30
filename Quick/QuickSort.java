public class QuickSort{
     static void QuickSort(int[] array,int left,int right){
     if(left >= right){
       return;
     }
     int i = left;
     int j = right;
     int temp = array[left];
     while(i<j){
       while(i<j && temp<array[j]){
          j--;
       }
       array[i] = array[j];
       while(i<j && temp>array[i]){
	       i++;
       }
       array[j] = array[i];
     }
     array[i] = temp;
     QuickSort(array,left,i-1);
     QuickSort(array,i+1,right);
   }
   public static void main(String[] args){
      int[] array = new int[]{78,45,95,34,64,55,32,87,44};
      QuickSort(array,0,array.length-1);
      for(int i=0;i<array.length;i++){
        System.out.print(array[i]+"   ");
      }
   }
}
