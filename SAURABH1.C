#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int A[5];
int n=5;
int temp;
for (int i=0;i<=n;i++){
printf("Enter the %d  element of array=  ",i );
scanf("%d",&A[i]);
}

for(int j=1;j<=n-1;j++)
{
  for(int k=0; k<=n-j;k++){
  if(A[k]>A[k+1]){
  temp=A[k];
  A[k]=A[k+1];
  A[k+1]=temp;
  }
  }
}
printf(" \n Sorted Elements are: ");
for (int l=0;l<=n;l++){
 printf ("\n  %d element of array :%d ",l,A[l]);
}
getch();
}