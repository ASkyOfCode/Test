public class SelectSort{
	static void Select_Sort(int[] array){
        for(int i=0;i<array.length-1;i++){
			int index = i;
			for(int j=i+1;j<array.length;j++){
				if(array[index] > array[j]){
					index = j;
				}
			}
			if(index != i){
				int temp = array[i];
				array[i] = array[index];
			    array[index] = temp;
			}
		}
	}
	public static void main(String[] args){
         int[] array = new int[]{52,64,2,15,35,84,55,32,47,31};
		 Select_Sort(array);
		 for(int ch:array){
			 System.out.printf(ch + " ");
		 }
		 System.out.println();
	}
}
