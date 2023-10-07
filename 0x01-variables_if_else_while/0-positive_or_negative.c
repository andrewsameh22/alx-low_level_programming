#include <stdlib.h>
#include <time.h>
#include <stdio.h>

<<<<<<< HEAD
int main(void)
{

  int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
  printf("%d is positive\n", n);
}
else if (n < 0)
{
  printf("%d is negative\n", n);
}
else
{
  printf("%d is zero\n", n);
}

return (0);
=======
/**
   * main - checks if positive, zero or negative
   *
   *Return: zero
   */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
>>>>>>> e0fc0a33b93d48a901b90634a44f71b590d37aac
}
