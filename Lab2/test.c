#include<stdio.h>
int main()
{
int n, t1 = 0, t2 = 1, nextTerm = 0, i;
printf("Enter the n value: ");
scanf("%d", &n);

nextTerm = t1 + t2;
for (i = 3; i <= n; ++i)
{
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
printf("%d", t2);
}