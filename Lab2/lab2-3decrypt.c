//andrew west
//Privacy and cryptography
//1/17/14


//decrypt
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
printf("\nEncrypted:");
printf("\n%d%d%d%d", a,b,c,d, "\n");

crypt = a;
a = c;
c = crypt;
crypt = b;
b = d;
d = crypt;
if(a >= 7)
{
a = a-7;
}
else
{
a = a +3;
}

if(b >= 7)
{
b = b-7;
}
else
{
b = b+3;
}

if(c <= 6)
{
c = c+3;
}
else
{
c = c-7;
}

if(d <= 6)
{
d = d+3;
}
else
{
d = d-7;
}

printf("\nDecrypted:");
printf("\n%d%d%d%d", a,b,c,d, "\n");

}
