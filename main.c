#include<stdio.h>
#include<readline/readline.h>
#include<stdlib.h>

int main(void){
  char *tempc = readline("Enter temperature in celcius");
  double tempf,newtempc;
  newtempc = atof(tempc);
  tempf = ((newtempc*1.8)+32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",newtempc,tempf);
}
