//To check alphabet, digit and special character 
/*#include <stdio.h>
int main()
{
    char al;
    printf("Program to check whether a character is a alphabet, digit or special\n\n");
    printf("Enter the character\t");
    scanf("%c", &al);
    if (al >= '0' && al <= '9')      
    {
        printf("The character is a digit");
    }
    else if (al >= 'a' && al <= 'z' || al >= 'A' && al <= 'Z')
    {
        printf("The character is a alphabet");
    }
    else
    {
        printf("The character is a special");
    }
    return 0;
}*/


//To check alphaber or not
/*#include<stdio.h>
int main()
{
    char alphabet;
    printf("Program to check whether a charcter is alphabet or not\n\n");
    printf("Enter any charcter\t");
    scanf("%c",&alphabet);
    if ((alphabet>='A') && (alphabet<='Z'))
    {
       printf("The character is an alphabet");
    }
    else if ((alphabet>='a') && (alphabet<='z'))
    {
       printf("The character is an alphabet");
    }
    else
    {
       printf("The character is not an alphabet");
    }
    return 0;
    
}
*/

//Calculator
/*
#include <stdio.h>
int main()
{
    float num1, num2, result = 0;
    char operator, a;
    printf("Simple Calculator\n\n");
    printf("Enter 1st number\n");
    scanf("%f", &num1);
    printf("Enter the operator ( + , - , * , / )\n");
    scanf("%c%c", &a, &operator);
    printf("Enter 2nd number\n");
    scanf("%f", &num2);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
   default:
   printf("Enter valid input");
    }
    printf("The result is %f",result);
    return 0;
}
*/

//To check armstrong number 
/*#include <stdio.h>
int main()
{
    long long num, n;
    int sum = 0, remainder = 0;
    printf("Program to check Armstrong Number\n\n");
    printf("Enter the number\n");
    scanf("%lld", &num);
    n = num;
    for (; n != 0; n = n / 10)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
    }
    if (num == sum)
    {
        printf("The Number is an Armstrong Number");
    }
    else
    {
        printf("The Number is not an Armstrong Number");
    }
    return 0;
}
*/


//To check palindrome number 
/*#include <stdio.h>
int main()
{
    long long num,n, reverse = 0;
    int remainder = 0;
    printf("Program to check whether a number is palindrome or not\n\n");
    printf("Enter the number\n");
    scanf("%lld", &num);
    n=num;
    for (; n != 0; n = n / 10)
    {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
    }
    if (num == reverse)
    {
        printf("The number is Palindrome Number");
    }
    else
    {
        printf("The number is not Palindrome Number");
    }
    return 0;
}
*/

//To check divisibility by 5 
/*#include <stdio.h>
int main()
{
    int num;
    printf("Program To check number is divisible by 5 and 11 or not\n\n");
    printf("Enter the number to check divisibility\n");
    scanf("%d", &num);
    if ((num % 5 == 0) && (num % 11 == 0))
    {
        printf("The number is Divisible by 5 and 11\n");
    }
    else if ((num % 5 != 0) && (num % 11 != 0))
    {
        printf("The number is not divisible by 5 and 11\n");
    }
    else
    {
        printf("Enter valid Number\n");
    }
    return 0;
}
*/

//FIBONACCI SERIES
/*
#include <stdio.h>
int main()
{
    int num, n1 = 0, n2 = 1, n3;
    printf("Enter the no.\n");
    scanf("%d", &num);
    printf("%d %d", n1, n2);
    for (int i = 2; i <= num; i++)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
*/

//To find first and last digit of a number
/*
#include <stdio.h>
int main()
{
    int first, last;
    long long num, n;
    printf("Program to find first and last digit of a number\n\n");
    printf("Enter the number\n");
    scanf("%lld", &num);
    n = num;
    last = n % 10;
    do
    {
        n = n / 10;
    } while (n >= 10);
    first = n;
    printf("The first digit is %d\nThe last digit is %d", first, last);
    return 0;
}
*/

//TO check leap year or not
/*
#include <stdio.h>
int main()
{
    int year;
    printf("Program to check whether a year is leap year or not\n\n");
    printf("Enter the year to check leap year\t");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("The year is a leap year");
    }
    else if (year % 100 == 0)
    {
        printf("The year is not a leap year");
    }
    else if (year % 4 == 0)
    {
        printf("The year is a leap year");
    }
    else
    {
        printf("The year is not a leap year");
    }
    return 0;
}
*/

//To input marks and to find percentage and grade
/*
#include<stdio.h>
int main()
{
    float phy,maths,bio,chem,comp,percent=0,max;
    printf("Program to input marks and to find percentage and grade\n\n");
    printf("Enter maximum marks per subject\n");
    scanf("%f",&max);
    printf("Enter the marks obtained\n");
    printf("Physics\n");
    scanf("%f",&phy);
    printf("Mathematics\n");
    scanf("%f",&maths);
    printf("Biology\n");
    scanf("%f",&bio);
    printf("Chemsitry\n");
    scanf("%f",&chem);
    printf("Computer\n");
    scanf("%f",&comp);
    percent=(phy+maths+bio+comp+chem)*100/(5*max);
    printf("Percenatge = %f%%\n",percent);
    if(percent>=90)
    {
        printf("Grade = A");
    }
    else if(percent>=80)
    {
        printf("Grade = B");
    }
    else if(percent>=70)
    {
        printf("Grade = C");
    }
    else if(percent>=60)
    {
        printf("Grade = D");
    }
    else if(percent>=40)
    {
        printf("Grade = E");
    }
    return 0;
}*/

//To find month days by month number 
/*
#include <stdio.h>
int main()
{
    int num;
    printf("Progarm to input month number and print number of days in that month\n\n");
    printf("Enter the Month Number\t");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("The number of days is 31");
        break;
    case 2:
        printf("The number of days in month is 28 or 29");
        break;
    case 3:
        printf("The number of days is 31");
        break;
    case 4:
        printf("The number of days in month is 30");
        break;
    case 5:
        printf("The number of days is 31");
        break;
    case 6:
        printf("The number of days is 30");
        break;
    case 7:
        printf("The number of days is 31");
        break;
    case 8:
        printf("The number of days is 31");
        break;
    case 9:
        printf("The number of days is 30");
        break;
    case 10:
        printf("The number of days is 31");
        break;
    case 11:
        printf("The number of days is 30");
        break;
    case 12:
        printf("The number of days is 31");
        break;
    default:
        printf("Enter month number between 1 to 12");
        break;
    }
    return 0;
}
*/

//Program For Note Counting for an Amount
/*
#include <stdio.h>
int main()
{
    int amount;
    int note2000 = 0, note500 = 0, note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;
    int total;
    printf("Program For Note Counting for an Amount\n\n");
    printf("Enter the amount\tRs. ");
    scanf("%d", &amount);
    if (amount >= 2000)
    {
        note2000 = amount / 2000;
        amount -= note2000 * 2000;
    }
    if (amount >= 500)
    {
        note500 = amount / 500;
        amount -= note500 * 500;
    }
    if (amount >= 100)
    {
        note100 = amount / 100;
        amount -= note100 * 100;
    }
    if (amount >= 50)
    {
        note50 = amount / 50;
        amount -= note50 * 50;
    }
    if (amount >= 20)
    {
        note20 = amount / 20;
        amount -= note20 * 20;
    }
    if (amount >= 10)
    {
        note10 = amount / 10;
        amount -= note10 * 10;
    }
    if (amount >= 5)
    {
        note5 = amount / 5;
        amount -= note5 * 5;
    }
    if (amount >= 2)
    {
        note2 = amount / 2;
        amount -= note2 * 2;
    }
    if (amount >= 1)
    {
        note1 = amount / 1;
        amount -= note1 * 1;
    }
    //calculating total number of notes required
    total=note2000+note500+note100+note50+note20+note10+note5+note2+note1;
    //Note required
    printf("\n");
    printf("Rs. 2000 Note is %d\n",note2000);
    printf("Rs. 500  Note is %d\n",note500);
    printf("Rs. 100  Note is %d\n",note100);
    printf("Rs. 50   Note is %d\n",note50);
    printf("Rs. 20   Note is %d\n",note20);
    printf("Rs. 10   Note is %d\n",note10);
    printf("Rs. 5    Note is %d\n",note5);
    printf("Rs. 2    Note is %d\n",note2);
    printf("Rs. 1    Note is %d\n",note1);
    printf("\nTotal Notes required is %d\n",total);
    return 0;
}
*/

//To count number of digit in a number
/*
#include <stdio.h>
int main()
{
    long long n;
    int count = 0;
    printf("Program to count no. of digit in a number\n\n");
    printf("Enter the number\n");
    scanf("%lld", &n);
    do
    {
        n /= 10;
        count++;
    } while (n != 0);
    printf("The Number of digit = %d", count);
    return 0;
}
*/

//To print numerical pattern 1
/*
#include <stdio.h>
int main()
{
    int num, n = 1;
    printf("How many rows do you want to print\n");
    scanf("%d", &num);
    printf("\n");
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n);
            ++n;
        }
        printf("\n");
    }
    return 0;
}
*/

// To print numerical pattern 2
/*
#include<stdio.h>
int main()
{
    int num;
    printf("How many rows do you wan to print\n");
    scanf("%d",&num);
    printf("\n");
    for (int i = 1; i <=num; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}
*/

//To check whether the number is positive, negative or zero
/*
#include <stdio.h>
int main()
{
    float num;
    printf("Program to check a number is positve ,negative or zero\n\n");
    printf("Enter the number\n");
    scanf("%f", &num);
    switch (num > 0)
    {
    case 1:
        printf("The number is positive");
        break;
    case 0:
        switch (num<0)
        {
        case 1:
        printf("The number is negative");
            break;
       case 0:
       printf("The number is zero");
       break;
        }
        break;
    
    default:
    printf("Enter valid input");
    break;
    }
    return 0;
}
*/

//To find the value of a number with power 
/*
#include <stdio.h>
int main()
{
    int base, power, num = 1;
    printf("Program to find power of a number\n\n");
    printf("Enter the Base of number\n");
    scanf("%d", &base);
    printf("Enter the power on number\n");
    scanf("%d", &power);
    for (int i = 1; i <= power; i++)
    {
        num = num * base;
    }
    printf("The number is %d", num);
    return 0;
}
*/

//To print armstrong numbers in the given range 
/*
#include <stdio.h>
int main()
{
    int base, power, num = 1;
    printf("Program to find power of a number\n\n");
    printf("Enter the Base of number\n");
    scanf("%d", &base);
    printf("Enter the power on number\n");
    scanf("%d", &power);
    for (int i = 1; i <= power; i++)
    {
        num = num * base;
    }
    printf("The number is %d", num);
    return 0;
}
*/

//TO print natural numbers upto the number given by user
/*
#include<stdio.h>
int main()
{
    int num,a=1;
    printf("Program to print natural number\n\n");
    printf("Enter the number upto which you want to print natural number\n");
    scanf("%d",&num);
    while (num>0)
    {
        printf("%d ",a);
        ++a;
        --num;
    }
    
    return 0;
}*/

//To print odd number between 1 and 100
/*
#include<stdio.h>
int main()
{
    int i;
    printf("Program to print odd number between 1 to 100\n");
    i=1;
    do
    {
      if (i%2!=0)
      {
        printf("%d ",i);
      }
       ++i;
      
    } while (i<=100);
    
    return 0;
}
*/

//TO print even number between 0 and 100
/*
#include <stdio.h>
int main()
{
    int i;
    printf("Program to print even number between 0 to 100\n");
    i=0;
    while (i<=100)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
        ++i;
        
    }
    
    return 0;
}
*/

//To input Week number and print Week day
/*
#include <stdio.h>
int main()
{
    int num;
    printf("Program to input Week number and print Week day\n\n");
    printf("Enter the week number\t");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Week day is Monday");
        break;
    case 2:
        printf("Week day is Tuesday");
        break;
    case 3:
        printf("Week day is Wednesday");
        break;
    case 4:
        printf("Week day is Thursday");
        break;
    case 5:
        printf("Week day is Friday");
        break;
    case 6:
        printf("Week day is Saturday");
        break;
    case 7:
        printf("Week day is Sunday");
        break;
    default:
    printf("Enter week number between 1 to 7");
    break;
    }
    return 0;
}
*/

//To find profit and loss
/*#include<stdio.h>
int main()
{
    float cp,sp,loss,profit;
    printf("Program to calculate profit or loss\n\n");
    printf("Enter the price at which you bought the product\nRs.");
    scanf("%f",&cp);
    printf("Enter the price at which you sold the product\nRs.");
    scanf("%f",&sp);
    //calculating loss and profit
    loss=cp-sp;
    profit=sp-cp;
    //checking profit or loss
    if (cp>sp)
    {
        printf("The loss is of Rs. %f",loss);
    }
    else if (cp<sp)
    {
        printf("The profit is of Rs. %f",profit);
    }
    else if (sp==cp)
    {
        printf("You made neither profit nor loss");
    }
    return 0;
}
*/

//To print natural number in reverse order and n is upto which you want to print given by user
/*
#include <stdio.h>
int main()
{
    int num, a = 0;
    printf("Program to print natural number in reverse\n\n");
    printf("Enter the number upto which you want to print natural number\n");
    scanf("%d", &num);
    a = num;
    while (num > 0)
    {
        printf("%d ", a);
        --a;
        --num;
    }
    return 0;
}
*/

//To print reverse of a number
/*
#include <stdio.h>
int main()
{
    int remainder = 0;
    long long num, reverse = 0;
    printf("Program to print reverse of a number\n\n");
    printf("Enter a number\n");
    scanf("%lld", &num);
    for (; num != 0; num = num / 10)
    {
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
    }
    printf("The Reverse of a Number is \n%lld", reverse);
    return 0;
}
*/

//To print star pattern 1
/*#include<stdio.h>
int main()
{
    int num;
    printf("How many rows do you wan to print\n");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}*/

//TO print star pattern 2
/*
#include<stdio.h>
int main()
{
    int num;
    printf("How many rows do you wan to print\n");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        for (int space = 1; space <=num-i; space++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}*/

//To print sum of digits of a number
/*
#include <stdio.h>
int main()
{
    int sum = 0, remainder = 0;
    long long num, n;
    printf("Program to sum the digit of a number\n\n");
    printf("Enter the number\n");
    scanf("%lld", &num);
    n = num;
    do
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    } while (n != 0);
    printf("The sum of digit of a number is %d", sum);
    return 0;
}*/

//To find sum of first and last digit of a number given by user 
/*
#include <stdio.h>
int main()
{
    int sum = 0, last, first;
    long long num,n;
    printf("Program to sum first and last digit of a number\n\n");
    printf("Enter the number\n");
    scanf("%lld", &num);
    n = num;
    last = n % 10;
    do
    {
        n = n / 10;
    } while (n >= 10);
    first = n;
    sum = first + last;
    
    printf("The sum of first and last digit of a number is %d", sum);
    return 0;
}
*/

//To find sum of natural number upto the n where n is given by user
/*
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Program to print sumof natural number\n\n");
    printf("Enter the number upto which you want to print sum\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
*/

//To input sides and output the type of triangle 
/*
#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Program to check whether the traingle is equilateral or scalene or isosceles\n\n");
    printf("Enter the Length of Sides of traingle\n");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 == side2 && side2 == side3)
    {
        printf("The triangle is equilateral");
    }
    else if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1))
    {
        printf("The triangle is isosceles");
    }
    else
    {
        printf("The traingle is scalene");
    }
    return 0;
}
*/

//To check whether the character entered by the user is uppercase or lowercase
/*#include <stdio.h>
int main()
{
    char al;
    printf("Program to check whether an alphabet is uppercase or lowercase\n\n");
    printf("Enter the alphabet\t");
    scanf("%c", &al);
    if (al >= 'a' && al <= 'z')
    {
        printf("The aplhabet is Lower Case");
    }
    else if (al >= 'A' && al <= 'Z')
    {
        printf("The aplhabet is Upper Case");
    }
    else
    {
        printf("Please Enter Valid Input");
    }
    
    return 0;
}
*/

//To check whether the character entered by the user is vowel or consonant 
/*
#include <stdio.h>
int main()
{
    char alph;
    printf("Program to check whethet a charcter is a vowel or consonant or not\n\n");
    printf("Enter the alphabet\t");
    scanf("%c", &alph);
    if ((alph >= 'A' && alph <= 'Z') || (alph >= 'a' && alph <= 'z'))
    {
        if (alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u' || alph == 'A' || alph == 'E' || alph == 'I' || alph == 'O' || alph == 'U')
        {
            printf("The alphabet is a vowel");
        }
        else
        {
            printf("The alphabet is a consonant");
        }
    }
    else
    {
        printf("Enter valid alphabet");
    }
    return 0;
}
*/
