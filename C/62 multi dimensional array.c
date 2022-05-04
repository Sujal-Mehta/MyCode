#include <stdio.h>
int main ()
{
    int students = 3, subjects = 5; 
    int marks [3][5];  //marks array will work to store value 

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("Enter the marks of student %d in subject %d : " , i+1 , j+1);
            scanf("%d" ,&marks[i][j]); //as i and j get increase so it get a sequence of marks [0] , marks [1] ...and so on 
        }
    }
    for (int  i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++) 
        {
            printf("The marks of student %d in subject %d is %d\n\n******\n ", i+1 , j+1 , marks [i][j]); 
            //as i and j get increase so it get a sequence of marks [0] , marks [1] ...and so on 
        }
        
    }
return 0 ;
}       