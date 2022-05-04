#include <stdio.h>

int strlen(char *st)
{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    { 
        len++ ;
        ptr++ ;
    }
    return len ;
}
 
int main()
{
    // char st[] = "sujal_mehta" ; 
    char st[100] ; 
    scanf("%s" ,st);
    int l = strlen(st);
    printf("The length of this string is %d", l);
    return 0;
}

//eeuta string banauxu ani teslai sajilai ley print garna ko lagi eeuta short name bhako variable ma haldiye 
//ani maile eeuta function ma pointer banaye jasma afu le banko string lai pass garauxu 

//teslai eeuta arko pointer ma add garauxu ani pointer ko help ley ma address lai plus garauxu eeuta initial variable lai assign garauxu tyo ra teslai nii plus garauxu so  tyo mero string length bhaye dinxa ra function bata teslai return garai dinxu