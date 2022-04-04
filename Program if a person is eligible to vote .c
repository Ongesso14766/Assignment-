//Program to determine if a person is eligible to vote based on age(18yrs)Nat.(Kenyan)
#include<stdio.h>

int main()
{
int age;
printf("Enter your age:");
scanf("%d", &age);
if("age!>=18")
{
printf("You are elegible to vote");
}
else
{
printf("You are not eligible to vote ");
}
    return 0;
}