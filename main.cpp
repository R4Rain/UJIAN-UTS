#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include "models.cpp"
#include "controller.cpp"
#include "validate.cpp"


int main()
{
   int t, n, left;
   char birthMonth[255], name[255];
   int birthDate, birthYear, tempN;
   scanf("%d %d", &t, &n);
   tempN = n;
   for(int i = 0;i < t;i++)
   {
      getchar();
      scanf("%d %s %d - %[^\n]", &birthDate, birthMonth, &birthYear, name);
      pushPatient(birthDate, birthMonth, birthYear, name);
   }
   left = curePatient(n);
   if(!head)
   {
      printf("All patients get the cure, %d cure left\n", left);
   }
   else
   {
      tempN = t - tempN;
      printf("Need %d cure\n", tempN);
      printAll();
   }
    return 0;
}
