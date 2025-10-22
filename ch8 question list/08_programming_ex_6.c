#include<stdio.h>

int main(){
  int m,n;
  printf("Enter the number of elements to be stored in array A\n");
  scanf("%d",&m);
  printf("Enter the number of elements to be stored in araay B\n");
  scanf(" %d",&n);
  int A[m],B[n],C[m+n];
  for (int i = 0; i < m; i++)
  {
    printf("Enter A[%d]\n",i);
    scanf("%d",&A[i]);
  }
  for (int j = 0; j < n; j++)
  {
    printf("Enter B[%d]\n",j);
    scanf(" %d",&B[j]);
  }
  int i=0,j=0,k=0;
  while(i<m && j<n){
    if(A[i]<=B[j]){
      C[k]=A[i];
      k++,i++;
    }
    else{
      C[k]=B[j];
      k++,j++;
    }
  }
  while(i<m){
    C[k]=A[i];
    k++,i++;
  }
  while(j<n){
    C[k]=B[j];
    k++,j++;
  }
  printf("The merged array, C = {");
  for (int i = 0; i < k; i++)
  {
    if(i<k-1){
    printf("%d, ",C[i]);
  }
  else{
    printf("%d",C[i]);
  }
  
}
printf("}");
  return 0;
}  
    
    