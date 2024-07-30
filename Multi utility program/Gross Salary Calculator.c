#include<stdio.h>
void main(){
    int salary;
    float HRA;float DA; float TA;

    printf("Enter basa salary :");
    scanf("%d",&salary);

    printf("Enter basa salary :");
    scanf("%f",&HRA);

    printf("Enter basa salary :");
    scanf("%f",&DA);

    printf("Enter basa salary :");
    scanf("%f",&TA);

    float cal = salary+((salary*HRA)/100)+((salary*DA)/100)+((salary*TA)/100);

    printf("Gross salary : Rs. %f",cal);
}
