#include<stdio.h>
#include<string.h>
int main()
{
  int i, j, ls, lw, count=0, temp, m;
  char str[100], word[20];
  printf("\nType a sentence: ");
  gets(str);
  printf("\nSelect a word: ");
  gets(word);

  ls = strlen(str);
  lw = strlen(word);
  for(i=0; i<ls; i++)
  {
    temp = i;
    for(j=0; j<lw; j++)
    {
      if(str[i]==word[j])
      i++;
    }
    m = i-temp;
    if(m==lw)
    count++;
    i = temp;
  }
  printf("\nThe word %s occurs %d times \n\n", word, count);

  return 0;
}
