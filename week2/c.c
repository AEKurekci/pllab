#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main ( void ){

bool b;
char c;
short s;
int i;
double r;

printf("The size of bool is:%ld\n",sizeof(b));
printf("The size of short is:%ld\n",sizeof(s));
printf("The size of int is:%ld\n",sizeof(i));
printf("The size of char is:%ld\n",sizeof(c));
printf("The size of double is:%ld\n",sizeof(r));

return 0;
}
