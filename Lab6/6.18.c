#include <stdio.h>
#define SIZE 10

void someFunction(const int b[], size_t startSubscript, size_t size);

int main(void)
{
int a[SIZE] = {8, 3, 1, 2, 6, 0, 9, 7, 4, 5};

puts("Answer is: ");
someFunction(a, 0, SIZE);
puts("");
}

void someFunction(const int b[],size_t startSubscript, size_t size)
{
if(startSubscript < size)
{
someFunction(b, startSubscript + 1, size);
printf("%d ", b[startSubscript]);
}
}

