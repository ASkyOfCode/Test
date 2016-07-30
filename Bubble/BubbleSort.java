public class BubbleSort{
	static void Bubble_Sort(int[] array){
       for(int i = 0; i < array.length-1; i++){
		   int judge = -1;
		   for(int j = 0;j<array.length-1-i;j++){
			   if(array[j] > array[j+1]){
				   int temp = array[j];
				   array[j] = array[j+1];
				   array[j+1] =temp;
				   judge = 1;
			   }
		   }
		   if(judge == -1){
              break;
		   }
	   }
	}
	public static void main(String[] args){
		int[] array = new int[]{54,85,34,26,2,58,64,33,14,56};
		Bubble_Sort(array);
		for(int i=0;i<array.length;i++){
			System.out.printf(array[i] + " ");
		}
		System.out.println();
	}
}
