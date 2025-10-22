/*
Selection sort is based on the following idea:
Selection the largest array element and swapping it with the last array element leaves an unsorted list whose size_of_unsorted_arr is 1
less than the size_of_unsorted_arr of the original list. If we repeat this step again on the unsorted list we will have an ordered
list of size_of_unsorted_arr 2 and an unordered list size_of_unsorted_arr n-2. When we repeat this until the size_of_unsorted_arr of the unsorted list becomes one, the result 
will be a sorted list.
Write a program to implement this algorithm.
*/
#include<stdio.h>

int main(){
    int size_of_unsorted_arr;
    printf("Enter the size of the array\n");
    scanf("%d",&size_of_unsorted_arr);
    int n=size_of_unsorted_arr, arr[size_of_unsorted_arr];
   
    for (int i = 0; i < size_of_unsorted_arr; i++)
    {
        printf("Enter arr[%d]\n",i);
        scanf("%d",&arr[i]);
    }
    int max,j=0,swap;
    while(size_of_unsorted_arr>1){
        max=arr[0];
        for (int i = 0; i < size_of_unsorted_arr; i++)
        {
            if(max<=arr[i]){
                max=arr[i];
                j=i;
            }
        }
        swap=arr[size_of_unsorted_arr-1];
        arr[size_of_unsorted_arr-1]=arr[j];
        arr[j]=swap;
        size_of_unsorted_arr--;

}
printf("After Selection Sort, the arr[%d] = {",n);
for (int i = 0; i < n; i++)
{
    if(i<n-1){
    printf("%d, ",arr[i]);
    }
    else{
        printf("%d",arr[i]);
    }
}
printf("}");

    
    return 0;
}