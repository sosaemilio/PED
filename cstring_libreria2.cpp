/* strcpy example */
#include <stdio.h>
#include <string.h>
#include <iostream>


int main ()
{
  char str1[]="Test string";
  char str2[40];
  char str3[40];
  strcpy (str2,str1);
  strcpy (str3, "me llamo emilio, todo salio bien" );
  printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
  return 0;
}