//assigning and some normal operation

#include <stdio.h>
int main()
{

    int integers = 125;
    float realnum = 8.5;
    char character = '@';
    // "\n" is used to break the line
    /* for integers variable we use %d 
    sujal and for real number we use %f and in character we use %c 
    */
    printf("printing integers = %d \n", integers);
    printf("printing realnum = %f \n", realnum);
    printf("printing character = %c \n", character);
    //Now we will write some calculation perfomed by assigning through variables
    //show we will assign value for example
    int calculation_1 = 5;
    int calculation_2 = 8;
    int calculation_3 = 45 + 45;
    int calculation_4 = 14 / 2;
    float calculation = 0.1 + 12;
    //calculation begins
    printf("printing sum of assigned variable calculation_1 and calculation_2 = %d \n ", calculation_1 + calculation_2);
    //printing inline calculations
    printf("Inline assigned variable calulation = %d\n", calculation_3);
    printf("Inline printing of assigned variable = %d\n", calculation_4);
    printf("Inline printing of assigned real numbers  = %f", calculation);
}