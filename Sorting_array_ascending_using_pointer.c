/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* sort array using pointer */
#include <stdio.h>
int array_sort(int *,int );
int main()
{
    int arr[5]={1,2,4,5,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int (*ptr)[5];
    ptr =&arr;
    printf("Original Array\n");
    for(int i=0;i<size;i++)
    {
       printf("%d ", (*ptr)[i]);
        
    }
     printf("\n");
    array_sort(*ptr,size);
   
}

int array_sort(int *ptr,int size)
{
    int t;
     for (int i=0;i<size;i++)
     {
        for (int j=i+1;j<size;j++)
        {
                if(*(ptr+j)<*(ptr+i))
                {
                    t=*(ptr+i);
                    *(ptr+i)=*(ptr+j);
                    *(ptr+j)=t;
                }
        }
     }
      printf("Sorted Array\n");
     for (int i=0;i<size;i++)
     {
         printf("%d ", *(ptr + i));  
     }
}
