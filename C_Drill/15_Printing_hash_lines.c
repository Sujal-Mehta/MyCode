#include <stdio.h>

//Function prototype
int read(void);                          /* this function takes size for printing lines */ 
void display(int size);                  /* this function display the lines/text */ 

//Body
int main()
{
    display(read());
    return 0;
}

//Function Defination
void display(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

int read(void)
{
    int size;

    while (size < 1 || size > 10)
    {
        printf("\nInput the size of the square : ");
        scanf("%d", &size);
    }

    if (size < 1 || size > 10)
    {
        printf("Size should be in (1 to 10)range\n");
    }
    return size;
}