#include <stdio.h>
int main ()
{
	int array [10] ;
	int *ptr =array ; 
	//upper line and this line works same
	//int *ptr = &array[0] ;
	 ptr = ptr  + 2 ; 
	if (ptr == &array [2])  
	{
		printf("These point to same location\n");
	}
	else {	
		printf("These do not point to same location\n");
	}
	//addresses of ptr and arrray is printed below
	printf("The value of ptr or address being stored in pointer ptr is %d and the address of array is %d\n", ptr ,&array[2]);

	return 0 ;
}