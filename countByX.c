#include <stdio.h>
#include <time.h>
#include "countByX.h"

int main(){
  struct timespec startTime, endTime;
  long TRTS; // Testing Result Time Seconds.
  long TRTnS;// Testing Result Time Nanoseconds.
  long RTS;  // Result Time Seconds.
  unsigned long long int RTnS; // Result Time Nanoseconds.
  unsigned x = 1;
  unsigned n = 1000;
  int number = 50000000;
  unsigned result[n];
  int i;


  /* This semi accounts for the testing apparatus */
  printf("Starting test accounting...\n");
  i = number;
  clock_gettime(CLOCK_MONOTONIC, &startTime);
  while(i){ 
    i--;
  }
  clock_gettime(CLOCK_MONOTONIC, &endTime);
  TRTS = endTime.tv_sec - startTime.tv_sec;
  TRTnS = endTime.tv_nsec - startTime.tv_nsec; 
  printf("Test acounting has taken: S%ld ns%ld\n", TRTS, TRTnS);
  printf("Test accounting will be subtracted from actual test results\n\n");
 

  /* This is a test for countByZero */
  printf("Starting countByZero...\n");
  i = number;
  clock_gettime(CLOCK_MONOTONIC, &startTime);
  while(i){ 
    countByZero(x, n, result);
    i--;
  }
  clock_gettime(CLOCK_MONOTONIC, &endTime);
  RTS = endTime.tv_sec - startTime.tv_sec - TRTS;
  RTnS = endTime.tv_nsec - startTime.tv_nsec - TRTnS + RTS * 1000000000;
  printf("countByZero has taken: %llu NanoSeconds\n\n", RTnS);
 

  /* This is a test for countByOne */
  printf("Starting countByOne...\n");
  i = number;
  clock_gettime(CLOCK_MONOTONIC, &startTime);
  while(i){ 
    countByOne(x, n, result);
    i--;
  }
  clock_gettime(CLOCK_MONOTONIC, &endTime);
  RTS = endTime.tv_sec - startTime.tv_sec - TRTS;
  RTnS = endTime.tv_nsec - startTime.tv_nsec - TRTnS + RTS * 1000000000;
  printf("countByOne has taken: %llu Nanoseconds\n\n", RTnS);


  /* This is a test for countByTwo */
  printf("Starting countByTwo...\n");
  i = number;
  clock_gettime(CLOCK_MONOTONIC, &startTime);
  while(i){ 
    countByTwo(x, n, result);
    i--;
  }
  clock_gettime(CLOCK_MONOTONIC, &endTime);
  RTS = endTime.tv_sec - startTime.tv_sec - TRTS;
  RTnS = endTime.tv_nsec - startTime.tv_nsec - TRTnS + RTS * 1000000000;
  printf("countByTwo has taken: %llu Nanoseconds\n\n", RTnS);


   /* This is a test for countByThree. Made by HashtagZ*/
  printf("Starting countByThree...\n");
  i = number;
  clock_gettime(CLOCK_MONOTONIC, &startTime);
  while(i){ 
    countByThree(x, n, result);
    i--;
  }
  clock_gettime(CLOCK_MONOTONIC, &endTime);
  RTS = endTime.tv_sec - startTime.tv_sec - TRTS;
  RTnS = endTime.tv_nsec - startTime.tv_nsec - TRTnS + RTS * 1000000000;
  printf("countByThree has taken: %llu Nanoseconds\n\n", RTnS);
 

  return 0;
}
