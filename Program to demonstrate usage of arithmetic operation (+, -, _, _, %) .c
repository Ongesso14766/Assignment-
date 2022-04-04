//Program to demonstrate usage of arithmetic operation(+, -, *, /, %) 
#include<stdio.h>

int main()
{
    int m=8, n=3, d;
    d=m+n;
    printf ("m+n=%d\n", d) ;
    d=m-n;
    printf ("m-n=%d\n", d) ;
    d=m*n;
    printf ("m*n=%d\n", d) ;
    d=m/n;
    printf ("m/n=%d\n", d) ;
    d=m%n;
    printf ("remainder when m is divided by n=%d\n", d);
    return 0;
}