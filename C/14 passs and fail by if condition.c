//Writting a program to find wheather a student is pass or fail 
//assuming total mark 100 an subect 3 and each subject required above 30 mark to get pass and overall pass decison  

#include<stdio.h>
int main () {
    int physics ,chemistry ,maths ;
    float total ;
    
    printf ("Enter the marks here in the sequence of Physics,chemistry,maths \n");
    scanf("%d %d %d", &physics, &chemistry, &maths);

total= (physics+chemistry+maths)/3  ;
if (total <40 || physics < 30 || chemistry < 30 || maths <30){
    printf ("You have got  %f and you are fail ",total);
}
else {
    printf ("You are pass by %f  percentage, keep it up ",total);
}
    return 0 ;
}
