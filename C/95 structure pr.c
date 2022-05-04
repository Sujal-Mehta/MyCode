//Create an array of 5 complex number created and display them with the help of a display function . the value must be taken as an input from user ..

#include <stdio.h>
#include <string.h>

typedef struct complex
{
    int real;
    int complex;
} comp;

void display (comp show){
    printf("The value of real part is %d \n",show.real);
    printf("the value of imaginary part is %d \n" , show.complex);
}

int main()
{
    comp cnums[5]; //  -->cnums means complex number store garny array and comp typedef ko section bata

    for (int i = 0; i < 5 ; i++)
    {
        printf("Enter the real value for %d num \n ", i + 1);
        scanf("%d", &cnums[i].real);

        printf("Enter the complex value for %d num \n ", i + 1);
        scanf("%d", &cnums[i].complex);
    }

    for (int i = 0 ; i < 5 ; i++){
        display(cnums[i]);
    }
    return 0 ;
}