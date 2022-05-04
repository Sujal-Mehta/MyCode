// write a function slice() to slice a string it should change the original string such that it is now the sliced string. Take initial and final as a start and ending position for slice.

#include <stdio.h>
void slice(char *st, int initial, int final)
{
    int i = 0;
    while ((i+initial) <= final)
    {
        st[i] = st[i + initial]; //this work such value like from s[0] get shift to s[1]
        i++;
    }
    st[i] = '\0';
}

int main()
{
    char st[] = "sujalmehta";
    slice(st, 1, 9);
    printf("%s", st);
    return 0;
}