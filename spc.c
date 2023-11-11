#include <stdio.h>

//the string.h is included for it's function like strcspn and strlen
#include <string.h>

 //the first thing we do is to define a maximum length of the array , 
 //it's better to define it on 1024 but it's okey to let it 100 in this code.

#define MAX_STRING 100 

int main(void)
{
    //now we're on the main function , we must declare some variables !
   char user_string[MAX_STRING] ;
   int count = 0 ;

    // we ask the user to give a string

   printf("donner une phrase : ");
   fgets(user_string , sizeof(user_string) , stdin); //the fgets is like scanf , but it's better to use in this case
   user_string[strcspn(user_string , "\n")] = '\0';  //here , we tell the programme that if the user want to jump a line with enter, the programme will stop the string at that point and it'll continue the compilation

   printf("la phrase separer est :\n ");

   for (int i = 0; i < strlen(user_string); i++) //here we use strlen to adapt with the length of the string given by the user
   {
      if ( ( (int)user_string[i] <= 90 && (int)user_string[i] >= 65 ) || ( (int)user_string[i] <= 122 && (int)user_string[i] >= 97 ) ) //we use the typecasting to use the ASCII table 
      {

         count++ ; //this counter incriment by 1 each time the condition is true (it's about letters !)
      }
      
       printf("%c \n", user_string[i]);
       
   }
   printf("le nombre des lettre est : %d",count);
}