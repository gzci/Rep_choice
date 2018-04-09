#include<stdio.h>
#include<math.h>
int main(void)

{

double x, y=0;

int year, n = 0;

printf("Please input x:");

scanf("%lf", &x);

do

{

n++;

y = 5000 * pow((1 + x/100 ), n);

} while (y < 10000);

year = 2006 + n;
printf("Output:\n");

printf("year = %d nian, chanzhi = %.2f\n", year, y);

return 0;

}