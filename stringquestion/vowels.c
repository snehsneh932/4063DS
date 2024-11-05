#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  int i, len, j = 0;
  char str[100];
  printf("enter the string:");
  gets(str);

  len = strlen(str);

  for (i = 0; i <= len; i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
      j++;
    }
  }

  printf("counting the vowels=%d", j);
}