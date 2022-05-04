//finding the area of circle
/*
#include<stdio.h>
int main () {
    int radius=5 ;
    float  pi=5;
    printf("area of the circle is %f \n", pi * radius * radius);
    return 0 ;
}
*/
//practise second 

// 2
//area of cylinder 
// #include<stdio.h>
// int main () {
//     int radius= 3 ;
//     float  pi=3.14;
//     printf("area of the circle is %f \n", pi * radius * radius);
//     //just adding height in formula 
//     int height=3 ;
    
//     //method one (directly)
//     printf("area of cylinder is %f\n",pi * radius * radius * height);
    
//     //or we can assigned area of circle like this 
//     float area_of_circle= pi * radius * radius ;
//     printf("area of cylinder %f\n",area_of_circle * height);

// //     return 0 ;
// // }

// // 3
// //practise third inputing method of above 
// #include<stdio.h>
// int main () {

//     //here assigning variables 
//     float  radius ;
//     float height ;
//     float pi =3.14; //pi has been kept as constant but we can remove it and uncomment the line number 46 and 47 and delete the constant also comment down the line number 49
   
//     printf("input the radius of the circle %f",radius);
//     scanf("%f", &radius);

//     printf("input the pi value  of the circle %f",radius);
//     scanf("%f" ,&pi);
   
//     // printf(" your pi value has been assigned as %f\n",pi); // uncomment and assign pi value here and comment down line number 46 and 47. 
    
//     float area_circle= pi * radius * radius ; //assigning variable for the formula of cylinder  to be executed for calculation .   
//     printf("The area of the circle is %f\n",area_circle);


//     printf("Now we are good to go for calculating area of cylinder \n");
    
//     printf("input the value of height %f",height);
//     scanf("%f", &height);

//     float area_cylinder = area_circle * height ; // assigning variable for the formula of cylinder to be executed for calculation .
//     printf("the area of cylinder is = %f",area_cylinder);

//     return 0 ;
// }
