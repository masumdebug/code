# include <stdio.h>
int main()
{
    int a[5] = {11,30,45,12,5};

    printf ("\n value of a[0] = %u", a);
    printf ("\n value of a[1] = %u", a[]);
    printf ("\n value of a[2] = %u", a[2]);
    printf ("\n value of a[3] = %u", a[3]);
    printf ("\n value of a[4] = %u", a[4]);
    

    printf ("\n value of a[0] = %u", *a);
    printf ("\n value of a[1] = %u", *(a+1));
    printf ("\n value of a[2] = %u", *(a+2));
    printf ("\n value of a[3] = %u", *(a+3));
    printf ("\n value of a[4] = %u", *(a+4));

    printf ("\n value of a[0] = %u", *a);
    printf ("\n value of a[1] = %u", *(1+a));
    printf ("\n value of a[2] = %u", *(2+a));
    printf ("\n value of a[3] = %u", *(3+a));
    printf ("\n value of a[4] = %u", *(4+a));

    printf ("\n value of a[0] = %u", 0[a]);
    printf ("\n value of a[1] = %u", 1[a]);
    printf ("\n value of a[2] = %u", 2[a]);
    printf ("\n value of a[3] = %u", 3[a]);
    printf ("\n value of a[4] = %u", 4[a]);

    printf ("\n value of a[0] = %u", *a);
    printf ("\n value of a[1] = %u", *(1+a));
    printf ("\n value of a[2] = %u", *(2+a));
    printf ("\n value of a[3] = %u", *(3+a));
    printf ("\n value of a[4] = %u", *(4+a));
 
}