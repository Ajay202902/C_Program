#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Prime(int num);
int Square(int num);
int Cube(int num);
void Factorial(int num);
void Palindrome(int num);
void Neon(int num);
void Fibonacci(int num);
void Armstrong(int num);
void Disarium(int num);
void Harshad(int num);
void main()
{
    int num;   //To store given number
    int choice;  //To store given choice
    printf("enter the number\n");
    scanf("%d",&num);
    printf("\nenter the following number to perform the respective action\n\n1 - To check if the number is prime number\n2 - To check if the number is square number\n");
    printf("3 - To check if the number is cube number\n4 - To find the factorial of the number\n5 - To check if the number is palindrome\n6 - To check if the number is neon number\n");  //choices to perform action
    printf("7 - To print fibonacci series\n8 - To check if the number is Armstrong number\n9 - To check if the number is Disarium\n10 - To check if the number is Harshad Number\n\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            if(Prime(num))            //To check whether the number is a prime 
            printf("\n%d is a prime number",num);
            else
            printf("\n%d is not a prime number",num);
            break;

        case 2:
            Square(num);     //To check whether the number is a perfect square
            break;

        case 3:
            Cube(num);       //To check whether the number is a perfect cube
            break;

        case 4:
            Factorial(num);  //To prinf factorial of the given number
            break;

        case 5:
            Palindrome(num); //To check whether the number is a palindrome
            break;

        case 6:
            Neon(num);       //To check whether the number is a neon number
            break;

        case 7:
            Fibonacci(num);  //To print fibonacci series uptil the given number
            break;

        case 8:
            Armstrong(num);  //To check whether the number is a armstrong number
            break;
        case 9:
            Disarium(num);  //To check whether the number is a Disarium number
            break;

        case 10:
            Harshad(num);    //To check whether the number is a Harshad number
            break;

        default:
            printf("\nenterd a wrong choice");
        
    }
}

int Prime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}

int Square(int num)
{
    for(int i=0;i<=num;i++)
    {
        if(i*i==num)
        {
            printf("\n%d is a perfect square",num); 
            return 0;
        }
    }
    printf("\n%d is not a perfect square",num);
    return 0;
}

int Cube(int num)
{
    for(int i=0;i<=num;i++)
    {
        if(i*i*i==num)
        {
            printf("\n%d is a perfect cube",num);
            return 0;
        }
    }
    printf("\n%d is not a perfect cube",num);
    return 0;
}

void Factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    fact=fact*i;
    printf("\nfactorial of %d is %d",num,fact);
}

void Palindrome(int num)
{
    int temp=0,rem=0,rev=0;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp/=10;
    }
    if(num==rev)
    {
        printf("\n%d is a Palindrome number",num);
    }
    else
    {
       printf(  "\n%d is not a Palindrome number",num);
    }
}

void Neon(int num)
{
    int sqr,rem,sum=0;
    sqr=num*num;
    while(sqr!=0)
    {
        rem=sqr%10;
        sum=sum+rem;
        sqr=sqr/10;
    }
    if(sum==num)
        printf("\n%d is a neon number",num);
    else
        printf("\n%d is not a neon number",num);
} 

void Fibonacci(int num)
{
    int n1=0,n2=1,nt=n1+n2;
    if(num<1)
        printf("\nenetred wrong number");
    else if(num==1)
        printf("\nfibonacci series: %d",n1);
    else if(num==2)
        printf("\nfibonacci series: %d, %d ",n1,n2);
    else
    {
        printf("\nfibonacci series: %d %d ",n1,n2);
        for(int i=3;i<=num;i++)
        {
            printf("%d ",nt);
            n1=n2;
            n2=nt;
            nt=n1+n2;
        }
    }

}

void Armstrong(int num)
{
    int rem,sum=0,temp;
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(num==sum)
       printf("\n%d is a armstrong number",num);
    else
       printf("\n%d is not a armstrong number",num);
}

void Disarium(int num)
{
    int num1=num;
    int c=0;
    while(num1!=0)
    {  
        num1/=10;
        c++;
    }
    num1=num;
    int sum=0;
    while(num1!=0)
    {
        int rem=num1%10;
        sum+=pow(rem,c);
        num1/=10;
        c--;
    }
    if(sum==num) 
        printf("\n%d is a Disarium Number.",num);
    else
        printf("\n%d is not a Disarium Number.",num);
}

void Harshad(int num)
{
    if(num<1)
    {
        printf("%d is not a harshad number",num);
    }
    else
    {
       int rem=0,sum=0;
       int n=num;
       while(num>0)
        {
            rem=num%10;
            sum=sum+rem;
            num=num/10;
        }
        if(n%sum==0)
            printf("\n%d is a harshad number",n);
        else
            printf("\n%d is not a harshad numbe",n);
    }
}