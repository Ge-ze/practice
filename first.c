#include<stdio.h>
#include<string.h>
int removeDuplicates(int *nums, int numsSize)
{   if(numsSize==0)
    return 0;
    int i,s=1;
    int * left=nums, *right=nums+1; 
    for(i=0;i<(numsSize-1);i++)
    {
          if(* left != * (right+i)){
            left++;
            * left=*(right+i);
            s++;
          }
          
    }
    return s;
} 
int main ()
{   int result,j;
   int nums[]={1,2,2,4,5};
   int numsSize=5;
   result=removeDuplicates(nums, numsSize);
    printf("%d\t[", result);
    for(j=0;j<result;j++)
    {
      printf("%d",*(nums+j));
    }
     
    printf("]\n");
    return 0;
}