//ai chat bot in c programming
#include<stdio.h>                                 // THE CODE CLASS YOUTUBE CHANNEL
#include<stdlib.h>
#include<string.h>
#include<time.h>

char (str[200] );

int main()
{   
    
    system("cls");
    printf("welcome in ai chat bot\n");
    while(1)
    {
     printf("user==>");
     gets(user_input);
    
     
     
     
     if(strcmp(str,"exit")==0)
     {
         system("cls");
         printf("bot ==> ok byy\n");
         break;
         return (0);
     }
     else if(strcmp(str,"hi")==0)
     {
         printf("bot ==> hi sir\n");
         return(0);
     }
     else if(strcmp(str,"open chrome")==0)
     {
         printf("ok sir , opeaning chrome browser \n");
         system("start chrome");
     }
     else if(strcmp(str,"open notepad")==0)
     {
         printf("ok sir , opeaning notpad editor \n");
         system("start notepad");
     }
     else if(strcmp(str,"open cmd")==0)
     {
         printf("ok sir , opeaning cmd terminal \n");
         system("start cmd");
     }
     else if(strcmp(str,"time")==0)
     {
         time_t s, val =1 ;
         struct tm* current_time;
         //time in second
         s = time(NULL);
         current_time = localtime(&s);
         //print time in minute
         //print hour and second
         printf("bot ==> %02d:%02d:%02d\n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
     }
     else if(strcmp(str,"open youtube")==0)
     {
        printf("ok sir , opeaning youtube \n");   
        system("start http://youtube.com");   
     }
    }
    return (0);
}