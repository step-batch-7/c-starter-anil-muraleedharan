#include <stdio.h>
#include <math.h>

unsigned char is_even(int);
unsigned char is_even(int num)
{
  return num % 2 == 0;
}

unsigned char is_odd(int);
unsigned char is_odd(int num)
{
  return !is_even(num);
}

int square(int);
int square(int num)
{
  return num * num;
}

int cube(int);
int cube(int num)
{
  return num * num * num;
}

float simple_interest(int, int, int);
float simple_interest(int principle, int interest_rate, int time_period)
{
  return (principle * interest_rate * time_period) / 100.00;
}

float compound_interest(int, int, int);
float compound_interest(int principle, int interest_rate, int time_period)
{
  return (principle * pow(1 + (interest_rate / 100.00), time_period)) - principle;
}

float convert_fahrenheit_to_centigrade(float);
float convert_fahrenheit_to_centigrade(float temp)
{
  return (9.0 / 5.0 * temp) + 32;
}

float convert_centigrade_to_fahrenheit(float);
float convert_centigrade_to_fahrenheit(float temp)
{
  return 5.0 / 9.0 * (temp - 32);
}

int greatest_of_three_numbers(int, int, int);
int greatest_of_three_numbers(int num1, int num2, int num3)
{
  if(num1>num2)
  {
    return num1 > num3 ? num1 : num3;
  }
  return num2 > num3 ? num2 : num3;
}

float average_of_three_numbers(int, int, int);
float average_of_three_numbers(int num1, int num2, int num3)
{
  return (num1 + num2 + num3) / 3;
}

int gcd(int, int);
int gcd(int num1, int num2)
{
  int remainder = num1;
  int number = num2;
  while(remainder > 0)
  {
    int temp = remainder;
    remainder = number % remainder;
    number = temp;
  }
  return number;
}

int lcm(int, int);
int lcm(int num1, int num2)
{
  return (num1 * num2) / gcd(num1, num2);
}

int main(void)
{
  int num, num1, num2, num3, principle, interest_rate, time_period;
  float temperature_to_convert;
  
  //Execution of is even
  printf("Enter a number to check is it even or not :\n");
  scanf("%d", &num);
  is_even(num) ? 
    printf("The given number %d is even\n\n", num) : 
    printf("The given number %d is not even\n\n", num);
  
  //Execution of is odd
  printf("Enter a number to check is it odd or not :\n");
  scanf("%d", &num);
  is_odd(num) ? 
    printf("The given number %d is odd\n\n", num) : 
    printf("The given number %d is not odd\n\n", num);
  
  //Execution of square
  printf("Enter a number to find it's square :\n");
  scanf("%d", &num);
  printf("Square of %d is %d\n\n", num, square(num));
  
  //Execution of cube
  printf("Enter a number to find it's cube :\n");
  scanf("%d", &num);
  printf("Cube of %d is %d\n\n", num, cube(num));
  
  //Execution of gcd calculator
  printf("Enter 2 numbers to find gcd : \n");
  printf("Number1 : ");
  scanf("%d", &num1);
  printf("Number2 : ");
  scanf("%d", &num2);
  printf("GCD of %d & %d is %d\n\n", num1, num2, gcd(num1, num2));
  
  //Execution of lcm calculator
  printf("Enter 2 numbers to find lcm : \n");
  printf("Number1 : ");
  scanf("%d", &num1);
  printf("Number2 : ");
  scanf("%d", &num2);
  printf("LCM of %d & %d is %d\n\n", num1, num2, lcm(num1, num2));
  
  //Execution of simple interest
  printf("Enter the following details to calculate simple interest\n");
  printf("Principle : ");
  scanf("%d", &principle);
  printf("Rate of interest : ");
  scanf("%d", &interest_rate);
  printf("Time period : ");
  scanf("%d", &time_period);
  printf("The simple interest for %dRs with interest rate %d%% for %d years is : %.2f\n\n",
    principle, interest_rate, time_period,
    simple_interest(principle, interest_rate, time_period));
  
  //Execution of compound interest
  printf("Enter the following details to calculate compound interest\n");
  printf("Principle : ");
  scanf("%d", &principle);
  printf("Rate of interest : ");
  scanf("%d", &interest_rate);
  printf("Time period : ");
  scanf("%d", &time_period);
  printf("The compound interest for %dRs with interest rate %d%% for %d years is : %.2f\n\n",
    principle, interest_rate, time_period,
    compound_interest(principle, interest_rate, time_period));
  
  //Execution of temperature conversion fahrenheit to centigrade
  printf("Enter the temperature in fahrenheit to convert to centigrade : \n");
  scanf("%f", &temperature_to_convert);
  printf("%.2f centigrade = %.2f fahrenheit\n\n",temperature_to_convert, 
    convert_fahrenheit_to_centigrade(temperature_to_convert));
  
  //Execution of temperature conversion centigrade to fahrenheit
  printf("Enter the temperature in centigrade to convert to fahrenheit : \n");
  scanf("%f", &temperature_to_convert);
  printf("%.2f fahrenheit = %.2f centigrade\n\n", temperature_to_convert, 
  convert_centigrade_to_fahrenheit(temperature_to_convert));

  //Execution of greatest of three numbers
  printf("Enter 3 numbers to find the greatest :\n");
  printf("1'st number : ");
  scanf("%d", &num1);
  printf("2'nd number : ");
  scanf("%d", &num2);
  printf("3'rd number : ");
  scanf("%d", &num3);
  printf("Greatest number among %d, %d & %d is %d\n\n", num1, num2, num3,
    greatest_of_three_numbers(num1, num2, num3));
  
  //Execution of average of three numbers
  printf("Enter 3 numbers to find the average :\n");
  printf("1'st number : ");
  scanf("%d", &num1);
  printf("2'nd number : ");
  scanf("%d", &num2);
  printf("3'rd number : ");
  scanf("%d", &num3);
  printf("Average of %d, %d & %d is %.2f\n\n", num1, num2, num3, 
    average_of_three_numbers(num1, num2, num3));
  return 0;
}