#include <time.h>
#include <stdio.h>
int main()
{
    clock_t tic = clock();

    printf ("himanshu");
    for( int i=0; i < 1000; i++)
{

 int j= 5;
  j =j+5;
}

    clock_t toc = clock();

    printf("Elapsed: %f seconds\n",( (double)(toc - tic)) / CLOCKS_PER_SEC);

    return 0;
}
