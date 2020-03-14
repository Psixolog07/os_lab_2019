#include "revert_string.h"

void RevertString(char *str)
{
   int size=0;
   char t;
   int i;
   for(i=0; str[i]!=0; i++)
   size++;
   for(i=0; i < size/2; i++){
       t=str[i];
       str[i]=str[size-i-1];
       str[size-i-1]=t;
   }
}