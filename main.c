#include<stdio.h>

int main(void){
  float temp,newtemp;
  printf("Enter temperature in celcius: ");
  scanf("%f",&temp);
  newtemp = (temp*1.8)+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",temp,newtemp);


}