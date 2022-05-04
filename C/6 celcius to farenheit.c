// celcius to farenheit
// #include<stdio.h> 
// int main () {
    
//     float celcius;
//     printf("Input the value of celcius to be converted : ");
//     scanf("%f", &celcius);

//     float calculation= celcius * 9/5;
//     printf("Calculation part_1 = %f\n",calculation);

//     float calculation_1= calculation + 32 ;
//     printf("calculation part_2 = %f\n",calculation_1);

//     printf("farenheit is = %f\n",calculation_1);
    
    
//     return 0;
// }


//2
#include<stdio.h> 
int main () {
    
    float celcius;
    printf("Input the value of celcius to be converted : "); //celcius value input 
    scanf("%f", &celcius);

    float calculation=  (celcius * 9/5 ) + 32 ; //putting values of formula like this 
    printf("Calculation part_1 = %f\n",calculation);

    
    printf("farenheit is = %f\n",calculation); //result 
    
    
    return 0;
}

