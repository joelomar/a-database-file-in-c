#include <stdio.h>
#include <stdlib.h>
#include "struct.h"


int main() {
    
  int answer = 1;
  int inputNum;
	char * inpname[20];
	char * inpemail[20];

  struct users newuser;
	*inpname = newuser.name;
	*inpemail = newuser.email;


  do {

    printf("Enter Your Name: \n");
    scanf(" %s", inpname);

    printf("Enter Your email: \n");
    scanf(" %s", inpemail);
   
    //------Create a database file-----// 
    FILE * dataf;
    dataf = fopen("data.txt", "a");
    //fprintf(dataf, "This file is for data \n \n ID: \t \t NAME: \t EMAIL: \n");
    fprintf(dataf, " %d \t %s \t %s \n", rand() % 3000000 + 1000000, inpname, inpemail);
    fclose(dataf);

    printf("Press 1 to save more Data or 0 to quit (1/0) \n");
    scanf(" %d", &inputNum);

   }while(answer == inputNum);

   //------KILL THE Programm-----//
   printf("Press any key to kill the programm");
   getch();
   return 0;
}

