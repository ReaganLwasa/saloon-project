#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

main(){
struct customer
{
    char name[30];
    char contact[30];
    char address[20];
};
char reply[10];
char option[]={"yes"};
char services[50];
char str1[]={"treatment"};
char str2[]={"washing"};
char hairstyle[]={"weave"};
char type_of_hairstyle[20];
char alpha [10];
char beta[]={"yes"};
int sum;
int price = 40000;
int labour = 20000;
FILE *lwaxs;

struct customer emp;
puts("OLIVA BEAUTY SALOON.\n \fTHE HOME OF BEAUTY.");
puts("Please wash your hands and put on your mask before entering. \nThank You.");
printf("Helo our dear customer, how can we help you.\n");
printf("Customers reply:\n");
scanf("%d\n");
gets(reply);
if(strcmp(reply, option)==0)
{
    //customer gives out personal information.
    printf("Enter customers name:\n");
    gets(emp.name);
    printf("Enter customers contact:\n");
    gets(emp.contact);
    printf("Enter customers address:\n");
    gets(emp.address);
    //the type of hair style.
    puts("type of hair style to plaint:\n");
    gets("type of hairstyle");
    if(strcmp(type_of_hairstyle, hairstyle)==0){
        printf("Please have a sit as we work on you.\n");
        printf("Extra services available.\n hair washing and treatment.(yes or no)\n");
        gets(alpha);
        if(strcmp(alpha,beta)==0){
            puts("\nThe extra services include hair treatment at UGX 15000 and hair washing at UGX 10000.");
            puts("\nIs there any extra cost we can provide?");
            if(strcmp(services,str1)==0){
                sum = price + labour+15000;
                printf("total cost: UGX%d\n",sum);
            }
        else if(strcmp(services, str2)==0){
            sum =price + lobour+10000;
            printf("Total cost: UGX%d\n",sum);
        }
        }
    puts("If no extra costs.\n");
    printf("Cost is: UGX %d\n", price+labour);
    puts("Pay at entrance, Only cash accepted.\n");
    printf("Our dear customer thanks for the support.\n");
    lwaxs = fopen("desktop\\c programs\\example.txt","w");
    if(lwaxs!=NULL){
        printf("File has been created successfully\n");
    }
    else{
        printf("The file has failed to open successfully.\n");
    }
    exit(0);
    }
}

return 0;



}


