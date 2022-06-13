#include <stdio.h>
#include <stdlib.h>
#include <string.h> // gia strcmp , strlen ktl
#include <ctype.h>  // gia tin toupper

//Enas eykolos ( kai ligo vrwmikos ) tropos gia na orizei kapoios megethi  metavlitwn xrisimopoiwntas ton precompiler
//opoudipote mesa ston kwdika o precompiler synantisei MAX_STRING_SIZE tha to antikatastisei me 200
#define MAX_STRING_SIZE 200


char myToupper(char inChar)
{
  // profanws i toupper einai implemented poly pio efficiently
  // xrisimopoiwntas tis apostaseis twn xaraktirwn kai kanontas aplws mia prosthetesi anti gia para polles if/else
  // parola ayta kapoios tha mporouse na kanei ena implementation me polles if/else pou tha emoiaze kapws etsi :

  if (inChar == 'a' )  { return 'A'; } else
  if (inChar == 'b' )  { return 'B'; } else
  // .. ktl ktl ..
  if (inChar == 'z' )  { return 'Z'; }

  return inChar;
}


void uppercaseStringAndIgnoreAChar(char * outputString , unsigned int outputSize , char * inputString  , char ignored)
{
  printf("Kalesate to uppercaseString ( %s , %u , %s )\n" , outputString , outputSize , inputString);
  unsigned int i;
  unsigned inputStringLength = strlen(inputString);

  if (outputSize < inputStringLength+1 )
  {
     printf("Den exoume arketo xwro..!");
     return ;
  }

    for (i=0; i<inputStringLength; i++)
    {
     //Metatrepoume to output se kefalaia
     outputString[i] = toupper(inputString[i]);

     //Ama o xaraktiras mas einai ignored ( px ignored='+'; ) ton antikathistoume me keno
     if (outputString[i]==ignored)
     {
       outputString[i]=' ';
     }
    }
   outputString[inputStringLength]=0; //Min ksexasw to null terminator , POLY SIMANTIKO!
  return;
}

//Orismenes dokimes me string
void test()
{
 //char monosXaraktiras='a';
 //char * stringXaraktirwn="abcde";

 char * ourString = "A String is this ( 1 + 1 = 2 ) ";
 char   kefalaioString[MAX_STRING_SIZE]={0}; //Allos tropos na sigoureytw oti tha yparxei null terminator einai na kanw olous tous xaraktires 0
    //null terminator sto string mou
    uppercaseStringAndIgnoreAChar(kefalaioString /*To output mas */ , MAX_STRING_SIZE /*To megethos tou output */ , ourString /*To input mas*/ , '+' /*Enas xaraktiras pou filtraroume*/);

    printf("I mnimi tou output stin arxi einai %s \n",kefalaioString);
    printf("To string opws to pirame einai \n %s \n" , ourString);
    printf("To string me kefalaia \n %s \n" , kefalaioString);

}


int main(int argc , char * argv[])
{
    printf("argv[0] einai to onoma tou programmatos pou twra einai %s \n" , argv[0]);

    if (argc<3)
     {
      printf("Den mas edwses arketes parametrous \n");
      return 1; //Error code
     }

//To input mas tha einai sta argv[1] kai argv[2]
//    argv[1] // -encrypt i -decrypt
//    argv[2] // cipher

     if (strcmp(argv[1],"-encrypt") ==0 )
     {
       printf("ENCRYPTION ACTIVATED ( cipher = %s ) \n", argv[2]);

      /*
       //Kwdikas pou xrisimopoiei tin getchar gia na parei input
       while (1)
       {
         printf("Dine mou gia panta ena char : \n");
         char in = getchar();
         printf("Edwses %c ",in);
       }
        */

       char *line = 0;
       size_t len = 0;
       while(1)
       {
         //Kwdikas pou xrisimoopoiei tin getline gia na parei input , i diaxeirisi tis mnimis
         //ginetai aytomata , alla prepei na dwsoume pointer se string .. ( eksou kai to & )
         // to len den mas einai xrisimo pros to paron
         printf("Dine mou gia panta  ena input na sou pw ti eipes.. \n");
         getline(&line, &len, stdin);
         printf("Eipes %s , to line dixnei stin dieythinsi mnimis %p \n",line,line);
         unsigned int arithmos = atoi(line);
         printf("To metetrepsa ston %u arithmo \n",arithmos);

         //printf("O xaraktiras 0 tou string pou mou edwses exei tin eksis timi se arithmo %u ", (unsigned int ) line[0] );
       }

     } else
     if (strcmp(argv[1],"-decrypt") ==0 )
     {
       printf("DECRYPTION ACTIVATED ( cipher = %s ) \n", argv[2]);
       //TODO
     } else
     if (strcmp(argv[1],"-test") ==0 )
     {
       test();
     } else
     {
       printf("Dont know what to do..\n");
       return 2; // Error code
     }

    return 0;
}
