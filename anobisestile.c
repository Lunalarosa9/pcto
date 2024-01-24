#include <stdio.h>
int main ()
{
    int ab;
    int a;
    scanf ( "%d" , &a);
    if ((a/4 %=0) && (a%100 !=0))
    {
        printf ("anno bisestile");
    }
    else
    {
        printf ("anno non bisestile");
    }
}
