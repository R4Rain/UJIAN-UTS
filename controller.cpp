#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
Patient *createPatient(int date, char *month, int year, char *name)
{
   Patient *temp = (Patient*)malloc(sizeof(Patient));
   strcpy(temp->birthMonth, month);
   strcpy(temp->name, name);
   temp->birthDate = date;
   temp->birthYear = year;
   temp->next = temp->prev = NULL;
   return temp;
}


void pushPatient(int date, char *month, int year, char *name){
   Patient *temp = createPatient(date, month, year, name);
   if(!head){
    head = tail = temp;
   }else if(year < head->birthYear){
    temp->next = head;
    head->prev = temp;
    head = temp;
   }else if(year > tail->birthYear){
       temp->prev = tail;
       tail->next = temp;
       tail = temp;
   }else{
       curr = head;
       while(curr){
             if(curr->birthYear == year)
             {
                 int current = validationBirthMonth(curr->birthMonth);
                 int inserted = validationBirthMonth(month);
                 if(current == inserted)
                 {
                    if(date < curr->birthDate)
                    {
                        break;
                    }
                    else if(date >= curr->birthDate)
                    {
                    	curr = curr->next;
                        break;
                    }
                 }
                 else if(current < inserted)
                 {
                        break;
                 }
                 else if(current > inserted)
                 {
                 	    curr = curr->next;
                        break;
                 }
             }else if(year < curr->birthYear){
             	break;
			 }
             curr = curr->next;
       }
       curr->prev->next = temp;
       temp->prev = curr->prev;
       curr->prev = temp;
       temp->next = curr;
   }
}

int curePatient(int n)
{
   while(n--){
   if(head && head == tail){
	   head = tail = NULL;
	   free(head);
       return n;
   }else{
	   Patient *temp = head->next;
	   head->next = temp->prev = NULL; 
	   free(head);	
	   head = temp;					  
   }
   }
   return n;
}

void printAll()
{
    curr = head;
    while(curr)
    {
        printf("%d %s %d - %s\n", curr->birthDate, curr->birthMonth, curr->birthYear, curr->name);
        curr = curr->next;
    }
}
