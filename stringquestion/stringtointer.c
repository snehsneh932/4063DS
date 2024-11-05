
#include <stdio.h>
#include <conio.h>
#include <string.h>

void convert(char str[])
{

  int num = 0;
  int n = strlen(str);

  for (int i = 0; i < n; i++)

    num = num * 10 + (str[i] - 48);

  printf("converted into integer:%d", num);
}

int main()
{

  char str[100];
  // char s[] = "123";
  printf("enter the string:");
  gets(str);
  convert(str);
  return 0;
}