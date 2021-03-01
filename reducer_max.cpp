///////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <cilk/cilk.h>
#include <cilk/cilk_api.h>
#include <cilk/reducer_max.h>
#include <time.h>       /* time */

int main(int argc, const char* argv[])
{
    cilk::reducer_max<int> maxint;
    cilk_for(int i=8; i>=1; 1--){
        cilk_for(int j=8; j>=1; j--){
            maxint=(9-i)*(9-j);
        }
    }

    printf("maxint is: %d", maxint);
}
