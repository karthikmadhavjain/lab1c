#include<stdio.h>
#include<readline/readline.h>
#include<stdlib.h>

int main(void){
  char *tempc = readline("Enter temperature in celcius");
  double tempf;
  tempf = atof(tempc);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",tempc,tempf);
}