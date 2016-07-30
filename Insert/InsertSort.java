public class InsertSort{
	static void Insert_Sort(int[] array){
	   for(int i = 0; i < array.length; i++){
	      /*for(int j = 0; j < i; j++){          
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
		 int j = i;
		 int temp = array[i];
		 while(j>0 && temp < array[j-1]){
			 array[j] = array[j-1];
			 j--;
		 }
		 array[j] = temp;
	   }
	}
	public static void main(String[] args){
	  int[] array = new int[]{45,54,2,95,78,36,43,21,75,24};
          Insert_Sort(array);
	  for(int i=0;i<array.length;i++){
	     System.out.printf(array[i]+" ");
	  } 
          System.out.println();
	}
}
