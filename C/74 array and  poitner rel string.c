#include <stdio.h>
//#include <>
int main()
{
    char arraystring[] = "hey my name is sujal mehta";
    puts(arraystring);
    printf("%s", arraystring);
    //yesailai eeut pointer banai tesma store garey bhaney loop bata print garna sakxu
    // arraystring = "mero nam sujal ho bhaney ra change gar";

    //array lai change garna sakdina if you kunai string carry gardai xa but pointer ma bhako string lai change garna sakxu

    char *ptr = "\nhey my name is sujal mehta";
    printf("%s",ptr );

    ptr = "\narey wah yeh toh change ho gaya" ;
    printf("%s" , ptr);
    return 0;
}