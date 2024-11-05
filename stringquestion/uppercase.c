#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  int i, len;
  char str[100];
  printf("enter the string:");
  gets(str);

  len = strlen(str);

  for (i = 0; i <= len; i++)
  {
    if (str[i] >= 97 && str[i] <= 122)
    {
      str[i] = str[i] - 32;
    }
  }

  printf("string in uppercase:%s", str);
  return 0;
}
