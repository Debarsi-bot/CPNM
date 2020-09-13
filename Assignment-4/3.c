#include <stdio.h>
int main()
{
int i,j,n,k,sum=0;
int arr1[3][3],arr2[3][3],arr3[3][3];


printf("Enter 1st array\n");
for(i=0;i<3;i++)
{

printf("Enter %d row \n",i);
for(j=0;j<3;j++){

scanf("%d",&arr1[i][j]);
}
}
printf("Enter 2nd  array\n");
for(i=0;i<3;i++)
{
printf("Enter %d row \n",i);
for(j=0;j<3;j++){

scanf("%d",&arr2[i][j]);
}
}

printf("Press 1 for addition \nPress 2 for subtraction \nPress 3 for multiplication\n");
scanf("%d",&n);
switch(n)
{
case 1:
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
arr3[i][j]=arr1[i][j]+arr2[i][j];
}
break;
case 2:
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
arr3[i][j]=arr1[i][j]-arr2[i][j];
}
break;
case 3:
for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
        for ( k = 0; k <3 ; k++) {
          sum = sum + arr1[i][k]*arr2[k][j];
        }

        arr3[i][j] = sum;
        sum = 0;
      }
    }
break;
default:
printf("Incorrect choice\n");
return;
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d    ",arr3[i][j]);
printf("\n");
}
}

