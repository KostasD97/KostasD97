#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXSIZE 200

char myToupper(char inChar)
{

  char *message, *emessage, *dmessage;
  int i, j=0, k, key, temp;
  clrscr();
  int  N[MAXSIZE];
  void encrypt(char*);
  void decrypt(char*);
  char *MAX;

  if (inChar=='a') { return 'A'; } else
    if (inChar=='b') { return 'B'; } else
        if (inChar=='c') { return 'C'; } else
            if (inChar=='d') { return 'D'; } else
                if (inChar=='e') { return 'E'; } else
                    if (inChar=='f') { return 'F'; } else
                        if (inChar=='g') { return 'G'; } else
                            if (inChar=='h') { return 'H'; } else
                                if (inChar=='i') { return 'I'; } else
                                    if (inChar=='j') { return 'J'; } else
                                        if (inChar=='k') { return 'K'; } else
                                            if (inChar=='l') { return 'L'; } else
                                                if (inChar=='m') { return 'M'; } else
                                                    if (inChar=='n') { return 'N'; } else
                                                if (inChar=='o') { return 'O'; } else
                                            if (inChar=='p') { return 'P'; } else
                                        if (inChar=='q') { return 'Q'; } else
                                    if (inChar=='r') { return 'R'; } else
                                if (inChar=='s') { return 'S'; } else
                            if (inChar=='t') { return 'T'; } else
                        if (inChar=='u') { return 'U'; } else
                    if (inChar=='v') { return 'V'; } else
                if (inChar=='w') { return 'W'; } else
            if (inChar=='x') { return 'X'; } else
        if (inChar=='y') { return 'Y'; } else
  if (inChar=='z') { return 'Z'; }

  else{
  return inChar;
}

 if ((inChar=='e') || (inChar=='E'))
 {
  scanf("Input text to encrypt----> ");
  printf("%s");
  temp=message[i]+key;
  if(temp>57)
    emessage[j++]=48+(temp-58);
  else
    emessage[j++]=temp;

 }else if((inChar=='d') || (inChar=='D')){
  scanf("Input text to decrypt----> ");
  printf("%s");
  {
  temp=message[i]+key;
  if(temp>122)
    emessage[j++]=97+(temp-123);
  else
    emessage[j++]=temp;
 }
 }else
  printf("%s=?\n");
  emessage[j++]=temp;
 }


for( i = 0; message[i] != NULL; i++){
  message[i]=tolower(message[i]);

  for(i=0;message[i]!=NULL;i++)
  {
    if(message[i]==' ')
    emessage[j++]=message[i];

   }else if(message[i]>=48 && message[i]<=57){
        temp=message[i]+key;
         if(temp>57)
         emessage[j++]=48+(temp-58);
         else
         emessage[j++]=temp;
       }
       else if(message[i]>=97 && message[i]<=123){
           temp=message[i]+key;
           if(temp>122){
             emessage[j++]=97+(temp-123);
           }else
             emessage[j++]=temp;
           }
         else
              emessage[j++]=message[i];
        }
     }
  }

for(i=0; emessage[i] != NULL; i++)
    {
    printf("%c", emessage[i]);
    for( i = 0 , j = 0; emessage[i] != NULL;i++)
    {
    if(emessage[i]==' ')
     dmessage[j++]=emessage[i];
     else if(emessage[i]>=48 && emessage[i]<=57){
     temp=emessage[i]-key;
     if(temp<48)
     dmessage[j++]=58-(48-temp);
     else
     dmessage[j++]=temp;
        }else if(emessage[i]>=97 && emessage[i]<=123){
           temp=emessage[i]-key;
           if(temp<97)
           dmessage[j++]=123-(97-temp);
           }else
           dmessage[j++]=temp;
          }
       }
   }


