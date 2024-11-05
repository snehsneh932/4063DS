// FOR EXAMPLE: THIS IS A SENTENCE. (IT IS IN UPPERCASE) CONVERT INTO This is a sentence

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  int i, len;
  char str[100];
  clrscr();

  printf("enter the string:");
  gets(str);

  len = strlen(str);

  for (i = 0; i <= len; i++)
  {
    if (str[0] >= 97 && str[0] <= 122)
    {
      str[0] = str[0] - 32;
    }

    else if (str[i + 1] >= 65 && str[i + 1] <= 90)
    {
      str[i + 1] = str[i + 1] + 32;
    }
  }

  printf("converted into senstenes=%s", str);

  return 0;
}
