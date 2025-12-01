#include<stdio.h>

int main(){
  int size;
  scanf("%d",&size);

  int A[size],B[size];

  for(int i = 0; i < size; i++)
  {
    scanf("%d",&A[i]);
  }


  for(int i = 0; i < size; i++)
  {
    scanf("%d",&B[i]);
  }


  for(int i = 0; i < size; i++)
  {
    printf("%d ",A[i]+B[size-i-1]);
  }
  
  return 0;

}