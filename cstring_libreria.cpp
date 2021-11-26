#include <stdio.h>
#include <string.h>


//En esta se explica la str concatenate
int main ()
{
  char str[80];
  strcpy (str,"Emilio ");
  strcat (str,"esta ");
  strcat (str,"haciendo ");
  strcat (str,"una ");
  strcat (str,"exposicion.");
  puts (str);
  return 0;
}