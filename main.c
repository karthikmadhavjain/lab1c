#include<stdio.h>
#include<readline/readline.h>

int main(void){
  char *tempc = readline("Enter temperature in celcius");
  double newtempc = atof(tempc);
  double newtempf = ((newtempc)+32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",newtempc,newtempf);
}