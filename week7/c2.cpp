#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <limits.h>
#include <float.h>
using namespace std;

int main(){
	int d[][3][2]={4,5,6,7,8,9,10,11,12,13,14,15,16};
	int i=-1;
	int j;
	j=d[i++][++i][++i];
	printf("%d",j);
	return 0;
}
