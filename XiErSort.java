public class XiErSort{
	static void XiEr_Sort(int[] array){
       int span = array.length/2;
	   while(span > 0){
	   for(int i = 0;i<span;i++){
		    for(int j=i;j<array.length;j+=span){
				int index = j;
				int temp = array[j];
				while(index > i && temp < array[index - span]){
					array[index] = array[index-span];
					index-=span;
				}
				array[index] =temp;
			}
	   }
	   span = span/2;
	  }
	}
	public static void main(String[] args){
      int[] array = new int[]{42,56,35,24,86,94,3,55,76,12};
	  XiEr_Sort(array);
	  for(int i=0;i<array.length;i++){
		  System.out.printf(array[i] + " ");
	  }
	  System.out.println();
	}
}
