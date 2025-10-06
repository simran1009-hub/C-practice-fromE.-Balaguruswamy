/*
Write a program to read three integer values from the keyboard and displays the ouput stating that 
they are the sides of right-angled triangle.
*/
#include<stdio.h>

int checks_greatest(int,int,int);
int checks_greatest(int i1,int i2,int i3){
    int greatest,other1,other2;
        if(i1>=i2 && i1>=i3){
           greatest=i1;
           other1=i2;
           other2=i3;
           if((greatest*greatest)==((other1*other1) + (other2*other2))){
           printf("Yes, i1, i2 and i3 are the sides of a right-angled triangle\n");
           }
           else {
           printf("i1, i2 and i3 are not the sides of a right-angled triangle\n");
           }
        }
        else if(i2>=i1 && i2>=i3){
            greatest = i2;
            other1=i1;
            other2=i3;
            if((greatest*greatest)==((other1*other1) + (other2*other2))){
               printf("Yes, i1, i2 and i3 are the sides of a right-angled triangle\n");
            }
            else {
               printf("i1, i2 and i3 are not the sides of a right-angled triangle\n");
            }
        }
        else {
            greatest = i3;
            other1=i2;
            other2=i1;
            if((greatest*greatest)==((other1*other1) + (other2*other2))){
              printf("Yes, i1, i2 and i3 are the sides of a right-angled triangle\n");
            }
            else {
               printf("i1, i2 and i3 are not the sides of a right-angled triangle\n");
            }
        }
}
int main(){
    int i1,i2,i3;
    printf("Enter three integer values, i1 i2 i3\n");
    scanf("%d %d %d",&i1,&i2,&i3);
   checks_greatest(i1,i2,i3);
   
    return 0;
}