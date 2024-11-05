#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  char str[50];
  int i, len;
  char x;

  printf("enter the string=");
  gets(str);
  len = strlen(str);

  for (i = 0; i <= len; i++)
  {
    if (str[i] >= 65 && str[i] <= 97)
    {
      str[i] = str[i] + 32;
      printf("%c", str[i]);
    }

    else if (str[i] >= 97 && str[i] <= 122)
    {
      str[i] = str[i] - 32;
      printf("%c", str[i]);
    }
  }

  getch();
}