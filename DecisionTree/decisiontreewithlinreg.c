#include<stdio.h>
#include<stdlib.h>
int i,kilo;
float sumX=0, sumX2=0, sumY=0, sumXY=0, a, b,price;
#define S 50
/*Calling the scaling function*/
float* scaling(float y[]){
float largest_y,smallest_y;
largest_y=y[0];
for (i = 1; i <10; i++) 
{if (largest_y <y[i])
{largest_y=y[i];}
}
smallest_y=y[0];
for (i = 1; i <10; i++) 
{if (smallest_y>y[i])
{smallest_y=y[i];}
}
static float y_scaled[10]={};
float b=largest_y-smallest_y;
for (i = 1; i <10; i++){
y_scaled[i]=(((y[i]-smallest_y)/b)*10)+10;
}
return y_scaled;
}


struct node
{
  char data;
  struct node *left;
  struct node *right;
};

/* Linear regression Function*/
int* linreg(int x[],int y[]){

 /* Calculating Required Sum */
 for(i=1;i<=10;i++)
 {
  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + y[i];
  sumXY = sumXY + x[i]*y[i];
 }
 /* Calculating a and b */
 b = (10*sumXY-sumX*sumY)/(10*sumX2-sumX*sumX);
 a = (sumY - b*sumX)/10;
 
 /* Displaying value of a and b */
 printf("Values are: a=%0.2f and b = %0.2f",a,b);
 printf("\nEquation of best fit is: y = %0.2f + %0.2fx",a,b);
printf("Enter the number of kilometres driven");
scanf("%d",&kilo);
price=b*kilo+a;
printf("%f",price);
return 0;
}
int main(){
int cars,owner,mileage;
/* Initialize nodes */
struct node *root;
struct node *car;
struct node *swift;
struct node *indica;
struct node *sfirst;
struct node *sgreater;
struct node *ifirst;
struct node *igreater;
struct node *sfgtwenty;
struct node *sfltwenty;
struct node *sggtwenty;
struct node *sgltwenty;
struct node *ifgtwenty;
struct node *ifltwenty;
struct node *iggtwenty;
struct node *igltwenty;
/* Allocate memory */
car = malloc(sizeof(struct node));
swift = malloc(sizeof(struct node));
indica = malloc(sizeof(struct node));
sfirst= malloc(sizeof(struct node));
sgreater= malloc(sizeof(struct node));
ifirst=malloc(sizeof(struct node));
igreater=malloc(sizeof(struct node));
sfgtwenty=malloc(sizeof(struct node));
sfltwenty=malloc(sizeof(struct node));
sggtwenty=malloc(sizeof(struct node));
sgltwenty=malloc(sizeof(struct node));
ifgtwenty=malloc(sizeof(struct node));
ifltwenty=malloc(sizeof(struct node));
iggtwenty=malloc(sizeof(struct node));
igltwenty=malloc(sizeof(struct node));
/* Assign data values */
car->data=*"Car";
swift->data=*"Swift";
indica->data=*"Indica";
sfirst->data=*"First owner of swift";
sgreater->data=*"Greter than first owner of swift";
ifirst->data=*"first owner of indica";
igreater->data=*"Greter than first owner of indica";
sfgtwenty->data=*"Zwift first owner with milege greater than 20";
sfltwenty->data=*"Swift first owner with milege less than 20";
sggtwenty->data=*"Swift greater than first owner with milege greater than 20";
sgltwenty->data=*"Swift greater than first owner with milege less than 20";
ifgtwenty->data=*"Indica first owner with milege greater than 20";
ifltwenty->data=*"Indica first owner with milege less than 20";
iggtwenty->data=*"Indica greater than first owner with milege greater than 20";
igltwenty->data=*"Indica greater than first owner with milege less than 20";
/* Connect nodes */
car->left = swift;
car->right = indica;
swift->left = sfirst;
swift->right =sgreater;
indica->left =ifirst;
indica->right = igreater;
sfirst->left =sfgtwenty;
sfirst->right =sfltwenty;
sgreater->left =sggtwenty;
sgreater->right =sgltwenty;
ifirst->left =ifgtwenty;
ifirst->right =ifltwenty;
igreater->left =iggtwenty;
igreater->right =igltwenty;
/* Save address of first node in root */
root = car;
/*The tree we would like to travese*/
printf("Welcome to used Car price prediction system");
printf("\n Out of these 2 which Car is yours \n1. Swift \n2.Tata Indica");
scanf("%d",&cars);
/* Swift subtree*/
if(cars==1){
/*cars->swift Specifying the path in which your tree will travel*/ 
printf("\nWhat type of the owner are you? \n1.First \n2.Greater than first(Second and above)");
scanf("%d",&owner);
/*Owner type subtree*/
if(owner==1){
/*cars->swift->first Specifying the path in which your tree will travel*/ 
printf("\nWhat is your cars mileage? \n1.Greater than 20 \n2.Less than 20(20 and below)");
scanf("%d",&mileage);
if(mileage==1){
/*cars->swift->first->greater than 20 Specifying the path in which your tree will travel*/ 
float x_s_f_g[11]={24255,52000,42001,63000,67000,60295,75451,60000,83000,130002};
float y_s_f_g[11]={3.15,3.65,2.11,1.6,4.7,5.8,3.78,4.8,3.25,3.85};
float* x_s_f_g_s=scaling(x_s_f_g);
linreg((int*)x_s_f_g_s,(int*) y_s_f_g);
}else{
/*cars->swift->first->less than 20 Specifying the path in which your tree will travel*/ 
float x_s_f_l[11]={128813,167000,70000,70500,83000,23228,73000,108000,160000,99000};
float y_s_f_l[11]={1.5,2.7,1.5,1.5,2.7,4.5,0.8,1,1,1.6};
float* x_s_f_l_s=scaling(x_s_f_l);
linreg((int*)x_s_f_l_s,(int*)y_s_f_l);
}
}else{
/* It is a second owner of swift*/
/*cars->swift->second Specifying the path in which your tree will travel*/ 
printf("\nWhat is your cars mileage? \n1.Greater than 20 \n2.Less than 20(20 and below)");
scanf("%d",&mileage);
if(mileage==1){
/*cars->swift->second->greater than 20 Specifying the path in which your tree will travel*/ 
float x_s_s_g[11]={55000,14000,72425,69313,78000,88096,90000,130000,65000,109200};
float y_s_s_g[11]={1.75,3.2,2.45,2.65,2.3,3.5,3,4,4.99,2.2};
float* x_s_s_g_s=scaling(x_s_s_g);
linreg((int*)x_s_s_g_s,(int*)y_s_s_g);
}else{
/*cars->swift->second->less than 20 Specifying the path in which your tree will travel*/ 
float x_s_s_l[11]={64000,52000,59923,81000,58000,58000,55746,99595,98000,120000,65060};
float y_s_s_l[11]={6.8,3.55,6.46,6.1,7.55,5.95,6.95,4.75,6.1,3.2,4.8};
float* x_s_s_l_s=scaling(x_s_s_l);
linreg((int*)x_s_s_l_s,(int*)y_s_s_l);
}
}
}
else{
/*The car is Indica*/
/*cars->indica Specifying the path in which your tree will travel*/ 
printf("\nWhat type of the owner are you? \n1.First \n2.Greater than first(Second and above)");
scanf("%d",&owner);
/*Owner type subtree*/
if(owner==1){
/*cars->indica->first Specifying the path in which your tree will travel*/ 
printf("\nWhat is your cars mileage? \n1.Greater than 20 \n2.Less than 20(20 and below)");
scanf("%d",&mileage);
if(mileage==1){
/*cars->indica->first->greater than 20 Specifying the path in which your tree will travel*/ 
float x_i_f_g[11]={41000,75000,65000,78000,100073,52000,78000,150000,31000,124000,65060};
float y_i_f_g[11]={3.25,3.25,2.8,2.35,2,2.4,2.3,2.5,2.7,2.3,4.8};
float* x_i_f_g_s=scaling(x_i_f_g);
linreg((int*)x_i_f_g_s,(int*)y_i_f_g);
}else{
/*cars->indica->first->less than 20 Specifying the path in which your tree will travel*/ 
float x_i_f_l[11]={128813,167000,70000,70500,83000,23228,73000,108000,160000,99000,65060};
float y_i_f_l[11]={1.5,2.7,1.5,1.5,2.7,4.5,0.8,1,1,1.6,4.8};
float* x_i_f_l_s=scaling(x_i_f_l);
linreg((int*)x_i_f_l_s,(int*)y_i_f_l);
}
}else{
/* It is a second owner of indica*/
/*cars->indica->second Specifying the path in which your tree will travel*/ 
printf("\nWhat is your cars mileage? \n1.Greater than 20 \n2.Less than 20(20 and below)");
scanf("%d",&mileage);
if(mileage==1){
/*cars->indica->second->greater than 20 Specifying the path in which your tree will travel*/ 
float x_i_s_g[11]={82000,75648,100000,108995,137000,78000,77650,62188,200000,70000,65060};
float y_i_s_g[11]={0.75,0.82,1.3,1.25,0.95,1,1.15,2.95,0.85,1.8,4.8};
float* x_i_s_g_s=scaling(x_i_s_g);
linreg((int*)x_i_s_g_s,(int*)y_i_s_g);
}else{
/*cars->indica->second->less than 20 Specifying the path in which your tree will travel*/ 
float x_i_s_l[11]={178000,73000,100073,129000,80103,100400,8200,49000,27000,65932,65060};
float y_i_s_l[11]={2.5,2.2,2,3,1.8,2.85,4.4,1.6,3.5,1.95,4.8};
float* x_i_s_l_s=scaling(x_i_s_l);
linreg((int*)x_i_s_l_s,(int*)y_i_s_l);
}
}
}
}
