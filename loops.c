#include<stdio.h>

int factorial(num)
{
  return (num == 0) ? 1 : (num * factorial(num - 1));
}

int fibonacci(int);
int fibonacci(int no_of_terms)
{
  int current_term = 1, last_term = 0;
  for (int term_count = 1; term_count <= no_of_terms; term_count++)
  {
    printf("%d   ", last_term);
    int temp = current_term;
    current_term = current_term + last_term;
    last_term = temp;
  }
  printf("\n\n");
  return 0;
}

int multiplication_table(int, int);
int multiplication_table(int number, int no_of_terms)
{
  for (int term_no = 1; term_no <= no_of_terms; term_no++)
  {
    printf("%d x %d = %d\n", number, term_no, number * term_no);
  }
  printf("\n");
  return 0;
}

int sum_of_numbers_in_range(int, int);
int sum_of_numbers_in_range(int start, int end)
{
  int sum = 0;
  for (int num = start; num <= end; num++)  {
    sum += num;
  }
  return sum;
}

int product_of_numbers_in_range(int, int);
int product_of_numbers_in_range(int start, int end)
{
  int product = 1;
  for (int num = start; num <= end; num++)  {
    product *= num;
  }
  return product;
}

int nth_number_in_range(int, int, int);
int nth_number_in_range(int start, int end,int step)
{
  for (int num = start; num <= end; num+=step)
  {
    printf("%d  ", num);
  }
  printf("\n\n");
  return 0;
}

int odd_numbers_in_range(int, int);
int odd_numbers_in_range(int start, int end)
{
  int starting_odd = start % 2 != 0 ? start : start + 1;
  nth_number_in_range(starting_odd, end, 2);
  return 0;
}

int odd_number_series(int);
int odd_number_series(int limit)
{
  odd_numbers_in_range(1, limit);
  return 0;
}

int even_number_series(int);
int even_number_series(int limit)
{
  nth_number_in_range(2, limit, 2);
  return 0;
}

int sum_of_even_numbers_in_range(int, int);
int sum_of_even_numbers_in_range(int start, int end)
{
  int num = start % 2 == 0 ? start : start + 1;
  int sum = 0;
  while(num<=end){
    sum += num;
    num += 2;
  }
  return sum;
}

int odd_numbers_series_reverse(int);
int odd_numbers_series_reverse(int limit)
{
  int starting_odd = limit % 2 != 0 ? limit : limit - 1;
   for (int num = starting_odd; num >= 1; num-=2)
  {
    printf("%d  ", num);
  }
  printf("\n\n");
  return 0;
}

int main(void)
{
  int num, terms_count, limit, start, end, step;

  //Execution of factorial.
  printf("Enter a number to find the factorial : ");
  scanf("%d", &num);
  printf("Factorial of %d is %d\n\n", num, factorial(num));

  //Execution of fibonacci.
  printf("Enter the number of terms to print fibonacci series : ");
  scanf("%d", &terms_count);
  printf("Fibonacci series of %d terms :\n", terms_count);
  fibonacci(terms_count);

  //Execution of odd number series.
  printf("Enter the limit to print odd number series : ");
  scanf("%d", &limit);
  printf("Odd numbers from 1 - %d : \n", limit);
  odd_number_series(limit);

  //Execution of even number series.
  printf("Enter the limit to print even number series : ");
  scanf("%d", &limit);
  printf("Even numbers from 1 - %d : \n", limit);
  even_number_series(limit);
  
  //Execution of multiplication table.
  printf("Enter the following details to print multiplication table\n");
  printf("Number : ");
  scanf("%d", &num);
  printf("Number of terms : ");
  scanf("%d", &terms_count);
  printf("Multiplication table of %d :\n", num);
  multiplication_table(num, terms_count);

  //Execution of sum of any n numbers.
  printf("Enter the following details to find sum of numbers in any range\n");
  printf("Starting number : ");
  scanf("%d", &start);
  printf("Ending number : ");
  scanf("%d", &end);
  printf("Sum of numbers ranging from %d - %d is : %d\n\n", start, end, 
    sum_of_numbers_in_range(start, end));

  //Execution of product of any n numbers.
  printf("Enter the following details to find product of numbers in any range\n");
  printf("Starting number : ");
  scanf("%d", &start);
  printf("Ending number : ");
  scanf("%d", &end);
  printf("Product of numbers ranging from %d - %d is : %d\n\n", start, end, 
    product_of_numbers_in_range(start, end));

  //Execution of all odd numbers in a given range.
  printf("Enter the following details to print all the odd numbers in any range\n");
  printf("Starting number : ");
  scanf("%d", &start);
  printf("Ending number : ");
  scanf("%d", &end);
  printf("All the odd numbers between %d - %d is : \n", start, end);
  odd_numbers_in_range(start, end);

  //Execution of nth number in a range.
  printf("Enter the following details to print all the nth number in any range\n");
  printf("Starting number : ");
  scanf("%d", &start);
  printf("Ending number : ");
  scanf("%d", &end);
  printf("N(step) : ");
  scanf("%d", &step);
  nth_number_in_range(start, end, step);

  //Execution of sum of all even numbers in any range.
  printf("Enter the following details to print sum of even numbers in any range\n");
  printf("Starting number : ");
  scanf("%d", &start);
  printf("Ending number : ");
  scanf("%d", &end);
  printf("Sum of even numbers in range %d - %d is : %d\n\n", start, end, 
    sum_of_even_numbers_in_range(start, end));

  //Execution of odd number series in reverse.
  printf("Enter the limit to print odd number series in reverse order : ");
  scanf("%d", &limit);
  printf("All odd numbers in range 1 - %d in reverse order is : \n", limit);
  odd_numbers_series_reverse(limit);
  return 0;
}