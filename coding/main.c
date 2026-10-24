#include <stdio.h>

int main(){
/*Format specificier =Special tokens that begin with % symbol,
                    followed by a character that specifies that data type
                    and operational modifier (width, precision, flags).
                    they control how data is displayed or interpeted.*/

int age=25;
float price=500;
double pi=3.98765439;
char currency='$';
char name []="Guiomi the G";

printf(" I an %d years old\n",age);
printf("I eat%.2f every day\n",price);
printf(" I walk%.7lfkm every day\n",pi);
printf(" THe france currency is the %c (dollas)\n",currency);
printf(" I am called %s\n",name);

  /*width precision flags */

int num1=12;
int num2=12;
int num3 =14;
 printf("%02d\n",num1);
 printf("%3d\n",num2);
 printf("%04d\n",num3);

float nome1=13.567;
float nome2=12.678;
float nome3=0;
int x=0;
int y=0;
int z=0;
float A=0;
float B=0;
A=z-nome1;
B=y/ num3;

 x=num1/3;
 y=num3%4;
 z=nome2*x*y;
nome3=num1+num3;
 printf("%.2f\n",nome1 +30);
 printf("%.2f\n",nome2);
 printf("%.2f\n",nome3);

 printf("%d\n",x);
 printf("%d\n",y);
 printf("%-d\n",z);
 printf("%+f\n",A);
 printf("%f\n",B);
int m=21;
 m=10*m;
 printf("%d",m);

 return 0;
}
