#include <stdio.h>

int main()
{

    int a[15] = {1, 3, 5, 9, 12, 15, 20};
    int n = 7;
    int n1;
    int key = 18;
    int temp;
    int index;

    /*	Displaying Elements of an Array 	*/

    printf("\nElements in an array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (key < a[i])
        {
            index = i;
            break;
        }
    }

    /*	Getting Element Index to insert 	*/
    printf("\nIndex where we have to insert is : ");
    printf("%d ", index);

    /*	Shifting Element one step back and inserting value  	*/
    for (int i = n; i >= index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = key;
    n = n + 1;

    /*	Displaying The final Result of an array 	*/
    printf("\nElements in an array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}