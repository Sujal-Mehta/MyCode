#include "stdio.h"
int main ()
{
int a = 1 ;
printf("the value of a is %d\n",a );
printf("the adress of a is %u\n" , &a);  //this will be equal to value of  storage

int *storage = &a ;
int b ;
printf ("the address of b is %u\n" ,&b); //a new storage will be aloctes

printf ("the value of storage is %d\n" , storage);
printf ("the address of storage is %u\n" , &storage); //this address is quiet different

//original pointers basic begin from here upper portion was some warddd previous topics
//similary see this now
printf("\n\n" );
storage ++ ;
printf ("the value of storage is %d\n" , storage);
//the value of storage get change by 4 though storage ++ means adding 1 that means that
//my computer architecture stores an interger at 4 bytes each
//now lets see in character category
char x ;
char *y ;
y = &x ;
printf("The value of y which is also an address of x %d\n", y);
y++ ;
printf("The the value of y after increment is %d\n", y); //we see it is increased bu 1 means each character acquire 1 byte storage in memory
return 0 ;
}
