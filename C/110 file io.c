//write a program to modify a file containing an integer to double its value
#include <stdio.h>

int main()
{
    FILE *in_ptr;
    FILE *out_ptr;
    int number;

    in_ptr = fopen("110-sample.txt", "r");
    fscanf(in_ptr, "%d", &number);
    fclose(in_ptr);

    out_ptr = fopen("110-sample.txt", "w");
    fprintf(out_ptr , "%d" , number * 2);
    fclose (out_ptr);
}