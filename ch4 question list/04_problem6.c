//Q.Write a function to check whether a number is palindrome or not.
#include<stdio.h>
#include<stdlib.h>

void checks_for_palindrome(int ptr[] ,int);

void checks_for_palindrome(int ptr[],int size_of_string){
    int count=0;
    for (int i = 0; i < size_of_string/2; i++)
    {
        if(ptr[i]==ptr[size_of_string-i-1]){
count++;
        }
        
    }
    if(count==size_of_string/2){
        printf("Yes it is a palindrome\n");
    }
    else if(count!=size_of_string/2){
        printf("No it is not a palindrome\n");
    }
   
}
int main(){
        int size_of_string;
  printf("Enter the size of the string\n");
  scanf("%d",&size_of_string);
int* ptr;
ptr=(int*)malloc(size_of_string*sizeof(int));
printf("Enter the string\n");
for (int i = 0; i < size_of_string; i++)
{
    printf("Enter ptr[%d]\n",i);
    scanf("%d",&ptr[i]);
}

checks_for_palindrome(ptr,size_of_string);
free(ptr);
return 0;
}