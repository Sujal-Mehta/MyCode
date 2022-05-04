#include <stdio.h>
//#include <>
int main ()
{
char st1[100];
char st2[100];
char c ; 
char i = 0 ;

printf("Enter the first value : ");
scanf("%s" , st1);
// gets(st1); //yesari pani ma input lina sakxu 
//puts ko sato printf bata ni show garauna sakxu
puts(st1);
printf("Enter the next value : ");
while (c != '\n')
{
    fflush(stdin);
    scanf("%c" , &c);
    st2[i] = c ;
    i++; 
}
st2[i] = '\0';

printf("value of st1 is %s\n", st1);
printf("value of st2 is %s", st2);

return 0;
}