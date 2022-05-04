//if income is below 2.5l no need to pay tax and if income is above 2.5 to 5l then 5 perceny ....similaryly ..

#include<stdio.h>
int main () {
    float  tax = 0 , income; //assigning intial tax rate

    printf ("Enter Your Income Here \n"); // collecting income amount 
    scanf("%f", &income);

    if (income >= 0 && income <= 250000){ // condition applying
        tax = tax + 0 * (income);
    }

//we keep if without else or any because all will be read in this structure too ,


    if (income >= 250000 && income <= 500000)
    { // condition applying
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    { // condition applying
    tax = tax + 0.2 * (income - 500000);
    }
    if (income >= 1000000 )
    { // condition applying
        tax = tax + 0.3 * (income - 1000000);
    }
    printf ("Your Tax amount is %f ",tax); //final result showing 

    return 0 ;
}