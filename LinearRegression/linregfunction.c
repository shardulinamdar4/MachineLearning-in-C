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
