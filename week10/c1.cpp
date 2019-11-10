#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <limits.h>
#include <float.h>
using namespace std;

int main ( void ){

	string line;
        int rows=10,cols=12, count=0;
	int arr2d[rows][cols] ;
	arr2d[0][0]=3;
	arr2d[0][4]=4;
	arr2d[1][2]=5;
//        arr2d[10000][0]=1;

        int * ptr1 = &(arr2d[0][0]) ;
        int * ptr2 = &(arr2d[1][0]) ;
	cout <<"Size of arr2d("<<rows<<" rows and "<<cols<<" cols) is=" <<sizeof(arr2d) <<" bytes \n";
	cout <<"*ptr1 is: " <<*(ptr1) <<"\n";
	printf("ptr1  is %ld\n",(long)(ptr1));
	printf("ptr1+4 is  %ld\n",(long)(ptr1+4));
	printf("*(ptr1+4) is %ld\n",*(ptr1+4));

	printf("ptr2 is %ld\n",(long)(ptr2));
	printf("(ptr2+2) is %ld\n",(long)(ptr2+2));
	printf("*(ptr2+2) is %ld\n",*(ptr2+2));

	cout <<" ptr1+? =ptr2\n";
	cin >> line;
        if (ptr1+(atol(line.c_str()))==ptr2){
		cout <<"CORRECT!\n";
        }
	else{
		cout <<"WRONG! Correct answer would be  "<<ptr2-ptr1 <<"\n";
	}
	cout <<" Can you guess the address of arr2d[1][2]?\n";
	cin >> line;
        if (atol(line.c_str())== (long) &(arr2d[1][2])){
		cout <<"CORRECT!\n";
         }
        else{
		cout <<"WRONG answer!Correct one would be:" <<(long) &(arr2d[1][2])<<"\n";
         }

       return 0;
}

