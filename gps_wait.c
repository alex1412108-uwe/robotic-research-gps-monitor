#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "gps_wait.h"

/* simple function to pause */
/* adapted from cplusplus.com */
/* truly horrific on CPU load */
int wait (float seconds) {
  clock_t endwait;
  endwait = clock () + seconds * CLOCKS_PER_SEC ;
  while (clock() < endwait) {};
  return(0);
}

