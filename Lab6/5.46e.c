#include <stdio.h>

int sum(int n);

int main(void)
{

}


int sum(int n)
{
if(0==n)
{
return 0;
}
else
{
return n + sum(n);
}
}
