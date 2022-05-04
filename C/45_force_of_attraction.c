/**
 * @Author: ironman
 * @Date:   2021-05-28T07:28:34-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-28T07:45:34-04:00
 */



//Force of attraction = mass * gravity

#include "stdio.h"
float force_of_attraction(float mass);

float main()
 {
  float mass ;
      printf("Enter the value of mass in kg \n" );
      scanf("%f", &mass);

      printf("Force exerted by earth to the body is %f\n",force_of_attraction(mass) );
    
  return 0;
}
float force_of_attraction(float mass)
{
  float force  ;
  float gravitational_force ;

  // printf("Enter the value of gravitational force :\n");
  scanf("%f", &gravitational_force );
  force = mass * gravitational_force ;
  return force ;
}
