#include<stdio.h>
int i; 
/*Calling the scaling function*/
float* scaling(float y[]){
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
return y_scaled;
}
int main()
{
float x[5]={20003,39000,22000,38001,53000};
float y[5]={19.25,18.9,22.5,8.5,9.5};
float* x_1;
x_1=scaling(x);
for(i=1; i<5; i++)
{printf("\n%f ",x_1[i]);}
 return(0);
}
