// Comparing four numbers (greatest number)

#include<stdio.h>
int main () {
    int a , b, c, d ;

printf ("Enter Four numbers to check greatest one \n"); //i took 4 num
scanf ("%d %d %d %d", &a ,&b ,&c, &d );

    if (a>b && a>c && a>d ){ //checking that a is biger than other number or not
        printf ("%d is the greatest number",a);
    }
// else if (b>a || b>c || b>d){
else if (b>c && b>d){    //mathiko line ma a lai compare gari sakey ko bhayera yaha a comparee garina 
    printf ("%d is the greatest number",b);
}
// else if (c>a || c>b || c>d) {
else if ( c>d) {
    printf ("%d is the greatest number",c);
}
// else if (d>a || d>b || d>c ) {
    else {
    printf ("%d is the greatest number",d);
}
    return 0 ;
}
