#include <stdio.h>

void main()
{

 char s1[20],s2[20];
 int i,j;
 
 printf("\nEnter string 1:-  ");
 gets(s1);
 printf("\nEnter the string for matching:-  ");
 gets(s2);
 for (i=0;(i<20&&s1[i]!='\0');i++)
 {
  for (j=0;(j<20&&s2[j]!='\0');j++)
  {
   if (s1[i]==s2[j])
    s1[i]=' ';
  }

 }
 printf("\nString 1 after deletion process is %s",s1);

 printf("\nIts compressed form is  ");

 for (i=0;(i<20&&s1[i]!='\0');i++)
 {
  if (s1[i]!=' ')
   printf("%c",s1[i]);
 }
 
}
