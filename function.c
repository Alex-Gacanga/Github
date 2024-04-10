#include <stdio.h>
#include "function.h"
void add_details(struct shoes *botique,int size){
    for(int i=0;i<size;i++)
    {printf("Enter the name of the shoe \n");
    scanf("%s",botique[i].name);
    printf("Enter name of manufacturer\n");
    scanf("%s",botique[i].manufacturer);
    printf("Enter the size of the shoe\n");
    scanf("%d",&botique[i].size);
    printf("Enter the price of the shoe\n");
    scanf("%f",&botique[i].price);
    }
}
void print_details(struct shoes *botique,int size){
    for(int i=0;i<size;i++){
        printf("No.%d\n",1+i);
printf("Name:%s\n",botique[i].name);
printf("Manufacturer:%s\n",botique[i].manufacturer);
printf("size:%d\n",botique[i].size);
printf("price:%f\n",botique[i].price);
    }
}
