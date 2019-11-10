#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <limits.h>
#include <float.h>
using namespace std;

int main ( void ){

	string line;
	int arr[10];
	int arr2[10];
        int rows=10,cols=12, count=0;

	int arr2d[rows][cols] ;
	arr2d[0][0]=3;
	arr2d[0][4]=4;
	arr2d[1][2]=5;

       cout << "arr2d[0][0]= " <<arr2d[0][0] <<"\n";
       cout << "arr2d[0][4]= " <<arr2d[0][4] <<"\n";
       cout << "arr2d[1][2]= " <<arr2d[1][2] <<"\n";

	//arr2d[0][9999]=1;
	//cout <<arr2d[0][9999] <<"\n";




        //we can only do this extension of 10000 cols if we instead use an array of pointers
        int *ptr[rows];              
        for (int i=0; i<rows; i++)
         ptr[i] = (int *)malloc(cols * sizeof(int));
 
       // Note that ptr[i][j] is same as *(*(ptr+i)+j)
       ptr[0][0]=3;
       ptr[0][4]=4;
       ptr[1][2]=5;


       //cout << "ptr[0][0]="<<ptr[0][0] <<"\n";
       //cout << "ptr[0][4]=" <<ptr[0][4] <<"\n";
       //cout << "ptr[1][2]="<<ptr[1][2] <<"\n";
       //cout <<"ptr[0][9999]="<<ptr[0][9999] <<"\n";
       ptr[0] = (int *)malloc(10000 * sizeof(int));
       ptr[0][9999]=1;
cout << ptr[0][9999];
       return 0;
}

