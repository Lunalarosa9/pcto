#include <stdio.h>
int main ()
{
    int x; 
    int y; 
    int z;
    int s1;
    int s2;
    
    printf ( "inserisci un numero\n");
    scanf ( " %d" , &x);
    printf ("inserisici il secondo numero\n");
    scanf ( " %d" , &y);
    printf ("inserisci il terzo numero\n");
    scanf ( " %d" , &z);

    s1= x-y;
    s2= y-z;

    if (s1=s2)
{
    printf ("sono in prgressone aritmetica")

}
    else
    { 
        printf ("non sono in progressione aritmetica")
    }
    retun (0);
    
    if (s1==s2)
    {
        printf ("sono in progressione aritmetica");
    }
    else
    {
        printf ("non sono in progressione aritmetica");
    }
}
