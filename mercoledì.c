#include <stdio.h>
int main ()
{
    char c;
    char a;
    char e;
    char i;
    char o;
    char u;
    printf ("scrivi un carattere");
    scanf ( "%c" , &c);
     if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
{
    printf ("è una vocale");
}
else
{
    printf ("è una consonante");
}
 return (0);
}