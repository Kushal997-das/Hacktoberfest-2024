#include <string.h>
#include <stdio.h>

int main()
{
  int i=0, r, n, s, j, x, t=0;
  char str[100], word[20], new[20], c[100];
  printf("\nType a sentence: ");
  gets(str);
  printf("\nBefore which word: ");
  gets(word);

  char* pos = strstr(str, word);
  if(pos) {
      printf("Found the string '%s' at position: %ld\n", word, pos-str);
      printf("\nWhat to insert: ");
  gets(new);

  r = strlen(str);
  n = strlen(new);
  while(i <= r)
  {
    c[i]=str[i];
    i++;
  }
  s = n+r;
  j = (pos-str)+n;
  str[j]=' ';

  for(i=pos-str; i<s; i++)
  {
    x = c[i];
    if(t<n)
    {
      str[i] = new[t];
      t++;
    }
    str[j+1]=x;
    j++;
  }
  printf("\nAfter inserting the new word: ");
  puts(str);
  }
  else {
        printf("The string '%s' was not found in '%s' \n\n", word, str);
       }    
  return 0;
}
