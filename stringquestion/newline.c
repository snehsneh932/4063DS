#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  int i;
  char str[100];
  printf("enter the string:");
  gets(str);

  for (i = 0; str[i] != 0; i++)
  {
    printf("\n%c", str[i]);
  }
}