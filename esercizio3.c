#include <stdio.h>
int main ()
{ 
  int m;
  int i;
  int c;
  int l;
  int e;
  int tot;

   printf("inserisci età");
   scanf( "%d" ,&m);
   printf("inserisci età");
   scanf( "%d" ,&i);
   printf("inserisci età");
   scanf( "%d" ,&c);
   printf("inserisci età");
   scanf( "%d" , &l);
   printf("inserisci età");
   scanf( "%d" ,&e);
   tot = m+i+c+l+e;
   printf("somma delle età %d\n", tot);
   return (0);

   
 }