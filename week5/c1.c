#include<stdio.h>

typedef struct Person1{
        int age;
        double height;
        char name[8];
 } Person1;
typedef union Person2{
        int age;
        float height;
        char name[8];
 } Person2;

int main(){
//printf("%ld\n",sizeof(Person1));
//printf("%ld\n",sizeof(Person2));


Person1 mystruct={10,1.78,"Ali"};
Person2 myunion;
//myunion.height=1.78;
//myunion.age=23;

printf("%d\n",myunion.age);
printf("%f\n",myunion.height);

return 0;
}
