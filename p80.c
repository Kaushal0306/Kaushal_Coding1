#include<stdio.h>
#include<stdlib.h>
void DistinctArray(int[],int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
 
  ptr = (int *)malloc(iLength*sizeof(int)); 
 
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  DistinctArray(ptr,iLength);
  
  return 0;
}
void DistinctArray(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  
  for(i = 0;i<iSize;i++)
  {
    for(j = 0;j<i;j++)
	{
	  if(Arr[i]==Arr[j])
	  { 
	     break;
	  }
	}
	if(j==i)
	{
	  printf("%d\t",Arr[i]);
	}
  }
}