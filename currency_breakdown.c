#include<stdio.h>
#include<math.h>

int print_currency_count_get_balance(int, int);
int print_currency_count_get_balance(int amount, int currency)
{
  printf("%.0f x Rs %d\n", floor(amount / currency),currency);
  return amount % currency;
}

int currency_breakdown(int);
int currency_breakdown(int amount)
{
  int balance = print_currency_count_get_balance(amount, 2000);
  balance = print_currency_count_get_balance(balance, 500);
  balance = print_currency_count_get_balance(balance, 200);
  balance = print_currency_count_get_balance(balance, 100);
  balance = print_currency_count_get_balance(balance, 50);
  balance = print_currency_count_get_balance(balance, 10);
  balance = print_currency_count_get_balance(balance, 5);
  balance = print_currency_count_get_balance(balance, 1);
  return 0;
}

int main(void)
{
  int amount;
  printf("Enter the amount to breakdown : ");
  scanf("%d", &amount);
  printf("Currency list for %dRs is : \n", amount);
  currency_breakdown(amount);
  return 0;
}