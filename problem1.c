#include <stdio.h>

int main(void)
{
   char *names[] = {"Kris", "Himanshi", "Robert", "Brad", "Juan"};
   char student[] = "Matt";
   char **chPtrPtr = names+2;
   char *chPtr = *(names+2);

   printf("%c%c%c", chPtrPtr[0][1]+1, *(chPtr-2), student[4]+'='*2);
   printf("%c%c ", *(names[4]+1)+5, **(++chPtrPtr)-1);
   chPtr = chPtrPtr[1]+1;
   printf("%c %c", (*(names+1))[5]-'6', *(names[0])+14);
   printf("%c%c%c\n", *chPtr, *student, (*(*(chPtrPtr-2)+3)+2)/3);

   return 0;
}
/* Draw the memory created by these declarations and initializations 
   at the point indicated by “draw here”.  Furthermore, indicate 
   which sections of memory (e.g. stack, global, code) each variable 
   is in. Also show the changes that take place as the code runs. */