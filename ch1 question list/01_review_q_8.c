//Q.Write an algorithm and draw a flowchart to find out whether three points (x1,y1), (x2,y2), and (x3,y3) lie on a straight line.
#include<stdio.h>

int main(){
    float x1,y1,x2,y2,x3,y3;
  
    printf("Enter x1 y1\n");
  scanf("%f %f",&x1,&y1);
  printf("Enter x2 y2\n");
  scanf("%f %f",&x2,&y2);
  printf("Enter x3 y3\n");
  scanf("%f %f",&x3,&y3);
  if((x1==x2 && x1==x3 && x2==x3)|| (y1==y2 && y2==y3 && y3==y1)){
    printf("Yes, these points lie on a straight line\n");
  }
  else{
    printf("No, these points do not lie on a straight line\n");
  }
  
    return 0;
}
//CODED FOR ONLY VERICAL OR HORIZONTAL LINES=STRAIGHT LINES