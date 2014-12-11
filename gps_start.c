#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "gps_wait.h"

/*********************************************************/
/*                                                       */
/*       V V  Your functions here  V V                   */
/*                                                       */
/*********************************************************/

/*********************************************************/
/*                                                       */
/*       ^ ^  Your functions here  ^ ^                   */
/*                                                       */
/*********************************************************/

int main() {

  FILE *gpsHandle;
  char gpsString[105];

  /* initialise connection to GPS receiver */
  gpsHandle = fopen("gpsdata.txt","r");

  /* abort here if the file didn't open */
  if (gpsHandle==NULL) {
    printf("Couldn't open GPS data file\n");
    return(0);
  }

  /* loop trying to get data */
  while (!feof(gpsHandle)) {
    
    /* read data line */
    fgets(gpsString,100,gpsHandle);
    
    /*********************************************************/
    /*                                                       */
    /*       debug - print it                                */
    /*       remove this prinf statement when you're ready   */
    /*                                                       */
    /*********************************************************/
    printf("%s\n",gpsString);

    /*********************************************************/
    /*                                                       */
    /*       your code below                                 */
    /*       or any functions you write, just above "main"   */
    /*                                                       */
    /*********************************************************/
    
    
    /*********************************************************/
    /*                                                       */
    /* use wait(k) to put in a delay of n seconds            */
    /* this lets you watch the display change                */
    /*                                                       */
    /*********************************************************/
    wait(0.5);

  }

  return(0);

}