#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <limits.h>
#include <float.h>
using namespace std;

int main ( void ){

	int arr[10];
	int arr2[10];
	int arr2d[10][12] ;
        arr[9]=1;
        arr2[0]=2;
        int * ptr = arr ;
        int * ptr2 = arr+5 ;
	double r;
	int i;
	char c;
	bool b;
	printf("The size of bool is:%d byte\n",sizeof(b));
	printf("The size of char is:%d byte\n",sizeof(c));
	printf("The size of int is:%d byte\n",sizeof(i));
	printf("The size of arr is:%d byte \n",sizeof(arr));
	printf("The size of the first element arr is pointing to:%d bytes\n",sizeof(*arr));
	printf("The size of double is:%d bytes\n\n",sizeof(r));

/************************************************************************/
	printf("The address of the bool is:%ld\n",&b);
	printf("The address of the char is:%ld\n",&c);
	printf("The address of the int is:%ld\n",&i);
	printf("The address of the arr is:%ld\n",&arr);
	printf("The address of the arr[1] is:%ld\n",&arr[1]);
	printf("The address of the arr[0] is:%ld\n",&arr[0]);
	printf("The address of the double is:%ld\n",&r);
        
        string line;
        cout <<"Can you type the address of arr[2] and press enter >>"; 
        cin >> line;

        if ( atoll(line.c_str()) == (long long) &arr[2]){
             cout <<"YES! You guessed right! \n\n";
         }
	else{
               cout <<"Wrong answer:" <<line <<"\n";
	       printf(" Correct answer is:%ld\n\n",&arr[2]);
       	}         
/************************************************************************/
        //pointer arithmetic
	int randomnumber=rand();
        *(arr+2)=randomnumber;
        arr[2]+=1;
	cout <<"*(arr+2)=" <<randomnumber<<"\n";
	cout <<"arr[2]+=1;\n";
        cout <<"Can you guess the value of arr[2]?"<<"\n"; 
	cin>>line;	
        if ( atoi(line.c_str()) == arr[2]){
             cout <<"YES! You guessed right! \n\n";
        }
        else {
	     cout <<"Nope, sorry, try again!\n";
        }

/************************************************************************/
        /*more pointer arithmetic*/        
        *(ptr+2)+=1;
	cout <<"int * ptr = arr;\n";
	cout <<"*(ptr+2)+=1;\n";
        cout <<"Can you guess the value of arr[2]?"<<"\n"; 
	cin>>line;	
        if ( atoi(line.c_str()) == arr[2]){
             cout <<"YES! You guessed right!\n arr[2] is equal to *(ptr+2) and its value is ";
             cout <<*(ptr+2) <<"\n\n";

        }
        else {
	     cout <<"Nope, sorry, try again,correct answer is: ";
             cout <<*(ptr+2) <<"\n\n";

        }



	return 0;
}
