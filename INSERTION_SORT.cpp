#include<stdio.h>
void insert(int a[],int n)
{
  int i,j,temp;
  for(i=1;i<n;i++)
  {
    temp=a[i];
    j=i-1;
    while(j>=0&&a[j]>temp)
    {
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=temp;
  }
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}

int main()
{
  int i,n,a[20];
  printf("ENTER THE SIZE OF THE ARAY\n");
  scanf("%d",&n);
  printf("ENTER THE ELEMENTS\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("THE ARRAY THAT U ENTERED IS AS : ");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\nTHE ARRAY AFTER PERFORMING SORTING IS AS : ");
  insert(a,n);
}
