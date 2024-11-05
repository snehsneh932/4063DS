#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
  int len;
  char str[100];
  printf("enter the string:");
  scanf("%s", str);

  len = strlen(str);
  printf("All possible permutaiton:\n");
  perm(str, 0, len - 1);
}

void perm(char *str, int firstindex, int endindex) // let input=xyz, firstindex=0, endindex=2
{
  int j;

  if (firstindex == endindex)
  {
    printf("%s\n", str);
  }

  else
  {
    for (j = firstindex; j <= endindex; j++)
    {
      swap((str + firstindex), (str + j));
      perm(str, firstindex + 1, endindex);
      swap((str + firstindex), (str + j));
    }
  }
}

void swap(char *firstindex, char *endindex)
{
  char temp;
  temp = *firstindex;
  *firstindex = *endindex;
  *endindex = temp;
}