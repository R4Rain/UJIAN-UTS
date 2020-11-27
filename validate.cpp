#include<stdio.h>
#include<string.h>
int validationBirthMonth(char *month)
{
   if(strcmp(month, "january") == 0)
   {
       return 1;
   }
   else if(strcmp(month, "february") == 0)
   {
       return 2;
   }
   else if(strcmp(month, "march") == 0)
   {
       return 3;
   }
   else if(strcmp(month, "april") == 0)
   {
       return 4;
   }
   else if(strcmp(month, "may") == 0)
   {
       return 5;
   }
   else if(strcmp(month, "june") == 0 || strcmp(month, "juni") == 0)
   {
       return 6;
   }
   else if(strcmp(month, "july") == 0)
   {
       return 7;
   }
   else if(strcmp(month, "august") == 0)
   {
       return 8;
   }
   else if(strcmp(month, "september") == 0)
   {
       return 9;
   }
   else if(strcmp(month, "october") == 0)
   {
       return 10;
   }
   else if(strcmp(month, "november") == 0)
   {
       return 11;
   }
   else if(strcmp(month, "december") == 0)
   {
       return 12;
   }
   else
   {
       return -1;
   }

}
