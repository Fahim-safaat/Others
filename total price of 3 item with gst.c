#include<stdio.h>
int main (){

float total, price[3];

printf("Enter price of three items: \n");
scanf("%f %f %f",&price[0],&price[1],&price[2]);

total = (price[0]+(price[0]*0.18)+price[1]+(price[1]*0.18)+price[2]+(price[2]*0.18));

printf("Final cost: %.2f", total);

getch();
return 0;
}
