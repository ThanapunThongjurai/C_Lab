#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

unsigned long long int reverseNumber(unsigned long long int Receive)
{
  unsigned long long int SwN =0;

            while (Receive != 0)
            {
                SwN = SwN * 10;
                SwN = SwN + Receive%10;
                Receive = Receive/10;
            }
   return SwN;
}

unsigned long long int ReverseAndAdd(unsigned long long int Receive)
{
    unsigned long long int reverse = reverseNumber(Receive);
    unsigned long long int receive = Receive;
    int count = 0;
    int palindrome = 0;
    for(int i = 0 ; i < 1000; i++)
    {
      count = i;
      printf("%d %lli\n",i,receive);
      printf("%d %lli\n\n",i,reverse);
      if(receive != reverse)
      {

        receive = receive + reverse;
        reverse = reverseNumber(receive);

        if(receive > 4294967295)
        {
          i = 1000;
          palindrome = 1;
        }
      }
      else
        i = 1000;

    }
    if(palindrome == 0)
      printf("\nOUTPUT : %d %lli\n\n",count,receive);
    else
      printf("\nOUTPUT : NO palindrome\n\n");
}



void main(){
  printf("ReverseAndAdd PROGRAM CHALLANGE\n");
  printf("EXAMPLE : 505 \n");
  //Long unsigned integer type. Capable of containing at least the [0, 4,294,967,295] range;
  unsigned long long int Receive =1;

  while(Receive != '0')
  {
    printf("ENTER NUMBER : ");
    scanf("%lli",&Receive);
    //printf("%u\n",functionreverse(Receive));
    //printf("%d\n",strlen(Receive));
    if(Receive != '0')
      ReverseAndAdd(Receive);
    //printf("%lli",reverse(Receive));
    //printf("%lli",Receive);

  }
    printf("\n\n***************************END PROGRAM***************************\n\n");
}
