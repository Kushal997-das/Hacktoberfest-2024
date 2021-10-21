#include<string.h>
#include<stdio.h> 
void rev()
{
  char str[1000], rev[1000];
  int i, j, length;
  printf("Enter the string: ");
  scanf("%s", str);
  length=strlen(str);
  j = length - 1;
  for (i = 0; i < length; i++)
  {
    rev[i] = str[j];
    j--;
  }

  printf("\nreversed string: %s", rev);
}

void main()
{
	rev();
}