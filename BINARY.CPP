#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
   int i,loc;
  int beg=0 ;
    int  end=4;
   int mid,item=6;
 int arr[5];
 printf("Enter array elements") ;
 for(i=0;i<=4;i++)
 {

// printf("Enter element of array == ");
 scanf("%d",&arr[i]);

  }
 // printf("Enter item to be searched : ");
//  scanf("%d",&item);
  for(mid=((beg+end)/2);beg<=end;mid=((beg+end)/2))
  {
     if(arr[mid]<item)
     {
     beg=mid+1;
     }
     else
     {
     end= mid-1;
     }
   }
	 if(arr[mid]==item)
	  {  loc=mid;
	   printf("item found at %d : ",loc );
	   }
	 else{
	    printf("Item not found");
	     }


  getch();
}