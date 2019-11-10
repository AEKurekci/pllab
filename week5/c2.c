#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

typedef enum DataType { INTEGER, FLOAT_POINT, STRING } DataType ;

typedef union DataValue
{
    int v_int;
    float v_float;
    char* v_string;
}DataValue;

typedef struct DataNode
{
    DataType type;
    DataValue value;
}DataNode;

int main ( int argc, char *argv[]){

   if (argc == 1) 
	printf("Usage: %s\n",argv[0]);

    float temp;
    printf("Your input is %s \n",argv[1]);
    temp=atof(argv[1]);
    printf("input is %f\n",temp);

    DataNode inputData;

    inputData.type= atof(argv[2]);

    switch(inputData.type)
    {
        case INTEGER: inputData.value.v_int = (int)temp; break;
        case FLOAT_POINT: inputData.value.v_float = (float)temp; break;
        case STRING: inputData.value.v_string = (char*)(&temp); break;
    }
printf("I am a ");
   switch(inputData.type){
       case INTEGER: printf("Integer with value %d", inputData.value.v_int); break;
       case FLOAT_POINT: printf("Float with value %f", inputData.value.v_float); break;
       case STRING: printf("String with value %s", inputData.value.v_string); break;
   }
printf("\n");


return 0;
}
