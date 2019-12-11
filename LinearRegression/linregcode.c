#include<stdio.h>
int i,kilo;
float sumX=0, sumX2=0, sumY=0, sumXY=0, a, b,price;
#define S 50
int main()
{
float x[5]={20003,39000,22000,38001,53000};
float y[5]={19.25,18.9,22.5,8.5,9.5};
float* x_1;
float* y_1;
x_1=scaling(x);
y_1=scaling(y);

linearreg(x_1,y_1);
 return(0);
}
int linearreg(int x[],int y[]){

 /* Calculating Required Sum */
 for(i=1;i<=5;i++)
 {
  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + y[i];
  sumXY = sumXY + x[i]*y[i];
 }
 /* Calculating a and b */
 b = (5*sumXY-sumX*sumY)/(5*sumX2-sumX*sumX);
 a = (sumY - b*sumX)/5;
 
 /* Displaying value of a and b */
 printf("Values are: a=%0.2f and b = %0.2f",a,b);
 printf("\nEquation of best fit is: y = %0.2f + %0.2fx",a,b);
printf("Enter the number of kilometres driven");
scanf("%d",&kilo);
price=b*kilo+a;
printf("%f",price);
return 0;
}
/* Feature Scaling Function*/
float* scaling(float y[]){
printf("\n Printing the original array passed to the function");
for(i=1; i<5; i++)
{printf("\n%f ",y[i]);}
float largest_y,smallest_y;
largest_y=y[0];
for (i = 1; i <5; i++) 
{if (largest_y <y[i])
{largest_y=y[i];}
}
smallest_y=y[0];
for (i = 1; i <5; i++) 
{if (smallest_y>y[i])
{smallest_y=y[i];}
}
static float y_scaled[5]={};
float b=largest_y-smallest_y;
for (i = 1; i <5; i++){
y_scaled[i]=(((y[i]-smallest_y)/b)*10)+30;
}
printf("\n Printing the array scaled by the function");
for(i=1; i< 5; i++)
{printf("\n%f ",y_scaled[i]);}
return y_scaled;
}
