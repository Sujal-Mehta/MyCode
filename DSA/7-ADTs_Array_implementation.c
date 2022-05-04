#include <stdio.h>
#include <stdlib.h>

//Structure
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

//Function to create array
void create_array(struct myarray *stru_obj, int t_size, int u_size)
{
    // (*stru_obj).total_size = t_size;
    // (*stru_obj).used_size = u_size;
    // (*stru_obj).ptr = (int *)malloc(t_size * sizeof(int));

    // or we can use arrow operator to dectate like below
    stru_obj->total_size = t_size;
    stru_obj->used_size = u_size;
    stru_obj->ptr = (int *)malloc(t_size * sizeof(int));

    // we can use any one
}

//function to set_element in array
void set_element(struct myarray *stru_obj)
{
    int n;
    printf("Input %d Number for the Elements of Array\n", stru_obj->used_size);
    for (int i = 0; i < stru_obj->used_size; i++)
    {
        printf("#%d = ", i + 1);
        scanf("%d", &n);
        (stru_obj->ptr)[i] = n;
    }
}

// function to display array
void show(struct myarray *stru_obj)
{
    for (int i = 0; i < stru_obj->used_size; i++)
    {
        printf("\n%d\t", (stru_obj->ptr)[i]);
    }
}

int main()
{
    //array 1
    struct myarray arr;
    printf("\nPlease have an patient array is being in a way to be created.......\n");
    create_array(&arr, 50, 5);
    printf("Array has been created ");
    printf("we are running a set_element function to enter value in array !\n");
    set_element(&arr);
    printf("displaying arrays\n");
    show(&arr);

    //array2
    struct myarray arr2;
    printf("\nPlease have an patient array is being in a way to be created !\n");
    create_array(&arr2, 10, 2);
    printf("Array has been created ");
    printf("we are running a set_element function to enter value in array !\n");
    set_element(&arr2);
    printf("displaying arrays\n");
    show(&arr2);

    return 0;
}