#include <stdio.h>


unsigned int mystery(unsigned int a, unsigned int b);

int main(void)
{
unsigned int x;
unsigned int y;

printf("%s", "Enter two positeve integers:");
scanf("%u%u", &x, &y);

printf("The result is %u\n", mystery(x,y));
}

unsigned int mystery(unsigned int a, unsigned int b)
{
if(1 ==b)
{
return a;
}
else
{
return a + mystery(a,b-1);
}
}
