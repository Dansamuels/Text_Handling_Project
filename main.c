#include "header.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
            char filename[30];
            //initialisation of a character array
            char filecontent[1000];
            //initialisation of a character array
            printf("What is the name of the text file: ");
            scanf("%s", filename);
            //asks for and stores the uses input in the variable filename
            int a=1;
            //this stores the value for the number of lines in the program
            FILE *fptr = fopen(filename,"r+");
            //open and reads a file given by the user
    while(fscanf(fptr,"%s",filecontent) != EOF){
    //this stores the words from the file word by word
    //until the end of file is encountered
        for(int i=0; i<5; i++){
            if(strstr(filecontent,key_word[i])!=0)
            //this checks file for keywords
                {
                printf("\n", filecontent)&&a++;}
                //prints a new line
                //increases the line count by one
               }

        /*for (int i = 0; i< sizeof(key_word)/sizeof(key_word[0]); i++){

            if(strcmp(filecontent,key_word[i])==0)
                {
                printf("\n%s\n", filecontent);
                a+=2;
                }
                else
                {
                    printf("%s ",filecontent);
                }
               }*/



        if(strcmp(filecontent,key_word[0])==0||strcmp(filecontent,key_word[1])==0 || strcmp(filecontent,key_word[2])==0||
               strcmp(filecontent,key_word[3])==0 || strcmp(filecontent,key_word[4])==0 || strcmp(filecontent,key_word[5])==0){
               //checks two strings character by character
                printf("\n%s\n", filecontent);
                a+=2;
                //if the keywords are equivalent
                //the string is printed on a new line
              }
        else{
            printf("%s ",filecontent);
                //if the strings are not equivalent
                //the string is printed on the same line
              }


        for(int b=0; b<4; b++){
            if(strchr(filecontent,punctuation[b])){
               //checks the file for punctuation marks
               printf("\n")&& a++;
               //prints a new line if punctuation is found
              }
             }

         }
         printf("Number of Lines is: %d\n",a);
         //prints the number of lines in the file
       fclose(fptr);
       //closes the file
    return 0;



}







