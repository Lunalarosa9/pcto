#include <stdio.h>
int main ()
{
    int x;
    int y;
    int z;
    printf ("inserisci lunghezza del primo lato\n");
    scanf ("%d" , &x);
    printf ("inserisci lunghezza del secondo lato\n");
    scanf ("%d" , &y);
    printf ("inserisci lunghezza del terzo lato\n");
    scanf ("%d" , &z);
     if (x==y && y==z)
    {
       printf ("il triangolo è equilatero");
    }
     else if (x==y && y==z)
     {
        printf ("il triangolo è isoscele\n");
     }
     else 
     {
        printf ("il triangolo è scaleno\n");
     }
     return (0);
}
