#include<stdio.h>

int main(){
  int size;
  scanf("%d",&size);

  int A[size], cnt = 0;

  for(int i = 0; i < size; i++)
  {
    scanf("%d",&A[i]);
  }


  for(int i = 0; i < size; i++)
  {
    
    for(int j = i+1; j < size ; j++)
    {
       if((A[i] + A[j])% 2 != 0) 
       {
            // printf("(%d , %d)\n",A[i],A[j]);
            cnt ++;
       }
    }

  }

  printf("%d ",cnt);
  
  return 0;

}