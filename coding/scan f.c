#include <stdio.h>
#include <string.h>
int main(){

    /*int age=25;
    float gpa=500;
    char grade='\1';
    char name [15]="";

printf("Enter your age; ");
scanf("%d",&age);

printf("Enter your gpa: ");
scanf("%f",&gpa);

printf("Enter your grade: ");
scanf(" %c",&grade);

getchar();
printf("Enter your name: ");
fgets(name, sizeof(name),stdin);
name[strlen(name) -1]='\0';

printf("%d\n",age);
printf("%f\n",gpa);
printf("%c\n",grade);
printf("%s\n",name);*/


// SHOPPING CART PROGAM
char item[20]="";
float price =0.0f;
int quantity=0;
char currency[]="FCFA";
float total=0.0f;

printf("Enter the item you would like to buy: ");
fgets(item, sizeof(item),stdin);

printf("What is the cost of that item");
scanf("%f",&price);

printf("How many would you like to buy");
scanf("%d",&quantity);

total= price * quantity;
printf("Total=%.1f",&total);

return 0;}

