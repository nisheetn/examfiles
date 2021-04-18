
#include <stdio.h>
#include <stdlib.h>
#include "nisheet.h"
#include "nisheet2.h"
#include <string.h>

int main () {
   char string[20]="test 123";
   int length;

   length = func1(*string);
   printf("length is :%d\n", length);
   s
   func2(2);

   return(0);
}

int func1(char *str){
	return strlen(&str);
}

void func2(int count){
	for(int i = 0; i<count; i++)
        printf(" %d ", rand());
}

