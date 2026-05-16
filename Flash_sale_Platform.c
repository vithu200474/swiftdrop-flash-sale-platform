#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

/* ================================================Data base===================================================*/
struct events
{
  char Event_Name[100]; /*That show s the all events names */
  char date[11];/*that shows created date*/
  int units;/*that also show the total units of having event*/
    /* data */
};


/*=============================================================================================================*/
void Event_Managemnt(){}


int main(){
    printf("Select the you want.\n");
    printf("1) Creat Evant.\n");
    printf("2) Edit evant details.");
    printf("3) De activated coustomer account.");
/* ----------------------------------------------------------------------------------------------*/
    printf("SAMPLE DATA BASE updating......\n");

    
/*-----------------------------------------------------------------------------------------------*/
    Event_Managemnt();
    return 0;
}