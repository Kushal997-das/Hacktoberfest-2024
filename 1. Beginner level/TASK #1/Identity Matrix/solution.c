#include<stdio.h>
int main()
{
  int A[10][10], i, j, r, c, flag=0;
  printf("\nEnter the number of rows: ");
  scanf("%d", &r);
  printf("\nEnter the number of columns: ");
  scanf("%d", &c);
  printf("\nEnter the matrix elements: \n");
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
      scanf("%d", &A[i][j]);
  }
  printf("\nThe matrix is: \n");
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
      printf("%4d", A[i][j]);
    printf("\n");
  }

  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
    {
      if(i==j && A[i][j] != 1)
      {
        flag = -1;
        break;
      }
      else if(i!=j && A[i][j] != 0)
      {
        flag = -1;
        break;
      }
    }
  }

  if(flag==0)
    printf("\nIt is an identity matrix \n\n");
  else
    printf("\nIt is not an identity matrix \n\n");

  return 0;
}
