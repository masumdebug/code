#include <stdio.h>
int main()
{
    // declaration 
    char s[10];
    int a;

    // code logic
    printf("Hello World \n");
    printf ("You want to greet whom? : ");
    scanf("%s",s);
    printf ("\nHello %s",s);
    printf ("\nEnter an integer: ");
    scanf("%d",&a);
    printf ("\nHello %d",a);
}