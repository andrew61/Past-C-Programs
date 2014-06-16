//andrew west
//Privacy and cryptography
//1/17/14

#include <stdio.h>

int main()
{
int a,b,c,d;
int crypt;

printf("Enter a four digit integer: ");
scanf("\n%d%d%d%d", &a, &b, &c, &d);

a = (a + 7)%10;
b = (b + 7)%10;
c = (c + 7)%10;
d = (d + 7)%10;

crypt = a;
a = c;
c = crypt;
crypt = b;
b = d;
d = crypt;


printf("\n%d%d%d%d", a,b,c,d, "\n");


}
