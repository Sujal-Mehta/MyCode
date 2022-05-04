//according to ASCII table checking lower and Upper case characters

#include <stdio.h>
int main()
{
    char ch; //assigning

    printf("Enter the character here : "); // taking input
    scanf("%c", &ch);
    printf("the ascii number of %c is %d \n" , ch , ch);

    //For lower 97 to 122 lower
    // For upper case 65 -90  Upper 
    
    if (ch >= 97 && ch <= 122) {
        printf ("\nIt is lower case");
    }
     else if ( ch >= 65 && ch <= 90){
        printf("\nIt is uppercase");
    }
    else {
        printf ("\nIt is  not an alphabet or invalid operation ");
    }
    
    printf("\n\n\t Example of printing character from ASCII code \n\tfor this see source code \n %c\n" , 97); 
    return 0;
}