#include <stdio.h>
#include <stdbool.h>

int main(void){
     /* variable =It is a reuseable container for a value.
                behave as if it were the value it contains.
                int = A whole number (4 bytes in modern systems)
                flooat=single precising number(4 bytes)
                double=double precising number(8 bytes)
                char=single charecter (1 bytes)
                char[]=array of charecters(size varies)
                bool=1\0 (1bytes, requires <stdbool.h>)*/
int age=23;
int year =2045;
int quantity=12;
printf("You are %d yrs old\n",age);/**/
printf("in the year %d \n",year);
printf("You have ordered %d items\n" ,quantity);

float mark=23.26;
float temp=+123.235233;
printf("your temp in %.2f\n",temp-23);
printf("tou scored %.1f\n",mark);
                
double value=12.23456789;
printf("The value is %.7lf\n",value);
double e=2.2346646497986739070976;
printf("The value of e is  %.3lf\n",e);

char grades= 'Z';
char symbol='$';
char currency='F';
printf("the cameroon currency is the %c\n",currency);
printf("this in the symbol%c\n",symbol);
printf("your grade is %c\n",grades);

char name[]="Guiomi the G";
char food[]="Jelof_Rice";
printf("you are called %s\n",name);
printf("your favorite food is %s\n", food);

bool present=true;
bool Available=false;
printf("%d\n",Available);
if(Available){
     printf("This article is  avialable");
}
else{
     printf("This article is not avialable");
}
printf("%d\n", present);
if (present){ printf("you are a present");
}
else{
     printf("you are absent");
}
return 0;
}