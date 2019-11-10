#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main ( void ){

        int rows=3,cols=4, count=0;

	int arr2d[rows][cols] ;
	arr2d[0][0]=3;
	arr2d[0][3]=4;
	arr2d[1][2]=5;

//       printf("%s=%d\n","arr2d[0][0] " ,arr2d[0][0]);
  //     printf("%s=%d\n","arr2d[0][3] " ,arr2d[0][3]);
    //   printf("%s=%d\n","arr2d[1][2] " ,arr2d[1][2]);
      // printf("%s=%d\n","arr2d[4][0] " ,arr2d[4][0]);


//	arr2d[0][9999]=1;
//        printf("%s=%d\n","arr2d[0][9999]= " ,arr2d[0][9999]);



	// what if we would like to extend the two dimensional arrays using pointers dynamically?
        //we can only do this extension of 10000 cols if we instead use an array of pointers
        int *ptr[rows];

        for (int i=0; i<rows; i++)
         ptr[i] = (int *)malloc(cols * sizeof(int));

       // Note that ptr[i][j] is same as *(*(ptr+i)+j)
       ptr[0][0]=3;
       ptr[0][3]=4;
       ptr[0][9999]=5;


       printf("%d\n", ptr[0][0]);
       printf("%d\n", ptr[0][3]);
       printf("%d\n", ptr[0][2]);
//       printf("%d\n", ptr[0][99999]);
       ptr[0] = (int *)malloc(100000 * sizeof(int));
       ptr[1][99999]=1;
       printf("%d\n", ptr[0][99999]);
       return 0;
}

