// by Thanapun Thongjurai @ECP1N Rmuit kkc
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void Collatz(int start ,int end){
  int tempstart = start;
  int tempend = end;
  int i = start;
  int count = 0;
  int max =0;
  int NumberMax = 0;
  for(i;i<=end;i++)
  {
    // หลักนนั้นๆที่หา 3n+1
    int temp3n = i;
    count = 1;
    printf("%d is %d ",i,i);
    //printf("%d\t this number have 3n+1 is %d ",temp3n,temp3n);
    //int exitloop
    while (temp3n > 1) {
      if((fmod(temp3n,2))==0){
        temp3n = temp3n / 2;
        count++;
        printf("%d ", temp3n);
      }
      else{
        temp3n = (temp3n*3)+1;
        count++;
        printf("%d ", temp3n);
      }
    }
    printf("\n%d count is %d",i,count);
    if(max <= count)
    max = count;
    NumberMax=i;
    printf("\n");
  }
  printf("\nstart %d end %d most 3n+1 is  %d \n\n",tempstart,tempend,max);
}

void main(){
  printf("3n+1 PROGRAM CHALLANGE\n");
  printf("EXAMPLE :10 20\n");
    int start = 1;
    int end   = 1;
    while(start > 0 && start <1000000  && end > 0 && end <1000000)
    {
      printf("ENTER NUMBER START AND END :");

      scanf("%d",&start);
      scanf("%d",&end);
      if(start > 0 && start <1000000  && end > 0 && end <1000000)
        Collatz(start, end);
    }
    printf("\n\n***************************END PROGRAM***************************\n\n");
}
