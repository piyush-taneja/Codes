class GenericMethodTest
{
public static <E> void printArray(E[] inputArray)
{
for(int i=0;i<inputArray.length;i++)
{
System.out.print(inputArray[i]);
}
System.out.println();
}
public static void main(String args[])
{
Integer[] intArray={1,2,3,4,5};
Double[]doubleArray={1.1,2.2,3.3,4.4};


System.out.println("Array integerArray contains");
printArray(intArray);
System.out.println("double array contains");
printArray(doubleArray);
}
}