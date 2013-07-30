#include <time.h>

#include "quakedef.h"


//TODO: add multiple formats
int Time_Draw () 
{
  /* time_t current_time;
   char *result[24];
   int hour;
   int ampm;

   struct tm *tm_ptr;
   static int current_min = 0;

   current_time = time(0);
   localtime(&current_time);
   tm_ptr = gmtime(&current_time);



   hour = tm_ptr->tm_hour;
   ampm = 0;

   current_min = tm_ptr->tm_min;

   if(hour == 0)
      hour = 12;
   else if(hour >= 12) 
   {
      ampm = 1;

      if(hour >= 13)
         hour -= 12;
   }

   if(ampm == 0)
      printf (result, 20, "%02d/%02d AM %02d:%02d", tm_ptr->tm_mon+1, tm_ptr->tm_mday, hour, tm_ptr->tm_min);
   else
      snprintf (result, 20, "%02d/%02d PM %02d:%02d", tm_ptr->tm_mon+1, tm_ptr->tm_mday, hour, tm_ptr->tm_min);

   M_Print (200 + ((vid.width - 320)>>1), 8, result);*/

   return 0;
}