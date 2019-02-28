#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int beg=0 ;
    int  end=4;
   int mid,item;
 int arr[5];
 for(int i=0;i<=4;i++)
 {

 printf("Enter %d element of array == ",i);
 scanf("%d",&arr[i]);

  }
  printf("Enter item to be searched : ");
  scanf("%d",item);
  for( mid=((beg+end)/2);beg<=end;mid=((beg+end)/2))
  {
     if(arr[mid]<item)
     {
     beg=mid+1;
     }
     else
  {
     if(arr[mid]>item)
     {
     end= mid-1;
     }
     //else{
	 if(arr[mid]==item)
	  {
	   printf("item found at : ",mid );
	   }
	   else{
	    printf("Item not found");
	     }

	  // }
   }

  }

  getch();
}