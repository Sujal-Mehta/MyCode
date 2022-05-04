// snake water and gun game is similar to rock paper scissor game .
// write a c program capable of playing this game with you .
// your program should be able to print the result after you choose snake water or gun .

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function protocols
int snakewatergun(char you, char comp);

int main()
{
    int result, randnumber;
    char you, comp;

    //generating random number
    srand(time(NULL));
    randnumber = rand() % 100 + 1;

    if (randnumber < 33)
    {
        comp = 's';
    }
    else if (randnumber > 33 && randnumber < 66)
    {
        comp = 'w';
    }
    else if (randnumber < 100)
    {
        comp = 'g';
    }

        printf("'s' for snake \n 'g' for gun \n 'w' for water \n Enter what you want to choose  : ");
        scanf("%c", &you);

        printf("\nyou have choose %c \n computer has choosed %c \n\n ", you, comp);

        printf("\n");

        result = snakewatergun(you, comp);

        if (result == 0)
        {
            printf("Match drawn between you and computer # ");
        }
        else if (result == 1)
        {
            printf("You won the match #congratulation");
        }
        else if (result == -1)
        {
            printf("Computer won the match");
        }
        else
        {
            printf("Invalid operation !");
        }
}


    //function defination
    int snakewatergun(char you, char comp)
    {
        // returns 1 if you win , return -1 if comp win and returns 0 if draw
        // draw condition
        if (you == comp)
        {
            return 0;
        }

        //Non drawn conditions
        // possibilities/No of cases (s*g*w) X (s*g*w) = 9  //out of 9 three of the cases are equal and other are covered here

        if (you == 's' && comp == 'g')
        {
            return -1;
        }
        else if (you == 'g' && comp == 's')
        {
            return 1;
        }

        if (you == 's' && comp == 'w')
        {
            return 1;
        }
        else if (you == 'w' && comp == 's')
        {
            return -1;
        }

        if (you == 's' && comp == 'g')
        {
            return -1;
        }
        else if (you == 'g' && comp == 's')
        {
            return 1;
        }

        if (you == 'g' && comp == 'w')
        {
            return -1;
        }
        else if (you == 'w' && comp == 'g')
        {
            return 1;
        }
    }