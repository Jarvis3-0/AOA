#include <stdio.h>
#include<conio.h>
#include <string.h>

void main ()
{
   char mainstr[50], pat[50];
   int i,j,m,n;
   clrscr();
   printf("Enter main string " );
   gets(mainstr);
   printf("Enter pattern string " );
   gets(pat);
   m = strlen (mainstr);
   n = strlen (pat);
   for (i = 0; i <= m - n; i++)
   {
      for (j = 0; j < n; j++)
         if (mainstr[i + j] != pat[j])
              break;
      if (j == n)
         printf ("Pattern matches at index %d\n", i);
   }
   getch();
}