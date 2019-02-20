#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*

ใช้ itoa ฟังก์ชันจะง่ายมากๆกันเลยทีเดียวกับผี
เราไม่เราไม่ชอบ เอาแบบยากๆนั้ละะ 555
C – strrev() function




unsigned long long int functionNotreverse(char Receive[])
{
    //unsigned long long int result =atoi(Receive);

  unsigned long long int result = 0;
  for(int i=0; i<strlen(Receive); i++){
    result = result * 10 + ( Receive[i] - '0' );
    //printf("%u\n",result);
  }

  return result;
}
unsigned long long int functionreverse(char Receive[])
{
  unsigned long long int result = 0;
  int len = strlen(Receive);
  char reversestring[len];

  //เอาไว้กลับค่า

  for(int i = 1 ; i <=len ; i++)
  {
    reversestring[i] = Receive[len-i];
    //printf("%d\n",reversestring[i]-48);
    //ในที่สุดก็ได้แล้ววววววววววววววววววเย้
  }

  //เอาไว้แปลงเลข
  for(int i=1; i<=len; i++){
    //printf("%d before result \n",reversestring[i]-48);
    result = result * 10 + ( reversestring[i] - '0' );
    //printf("%u\n",result);
  }

  strrev(Receive);
  for(int i=0; i<len; i++){
    //printf("%d before result \n",reversestring[i]-48);
    result = result * 10 + ( Receive[i] - '0' );
    //printf("%u\n",result);
  }

  return result;
}


void ReverseAndAdd(char Receive[])
{
    unsigned long long int reverse=functionreverse(Receive);
    unsigned long long int result=functionNotreverse(Receive);
    int palindrome = 0;
    int count=0;

    for(int i = 0; i < 1000; i++){
      count = i;

//Long long unsigned integer type. Contains at least the [0, +18,446,744,073,709,551,615] range;[3][4] Specified since the C99 version of the standard.
      if(reverse!= result){
        printf("result  %d %lli\n",count,result);
        printf("reverse %d %lli\n",count,reverse);
        result = result + reverse;
        char tempresult[30];
        itoa(result,tempresult,10);
        reverse = functionreverse(tempresult);
        printf("--S--result  %d %s\n",count,tempresult);
        printf("----result  %d %lli\n",count,result);
        printf("----reverse %d %lli\n",count,reverse);
      }
      else{
        i =1000;
      }
    }
    if(palindrome == 0)
    {
      printf("END LOOP result %d %lli\n",count,result);
    }
    else
      printf("END LOOP not palindrome found\n");

      อันนี้เป็นแบบทัี่ยงัใช้ unsigned int เขียนเงื่อนไขเยอะมาก
      if(result != reverse){
        if(strlen(result) >= 10 ){
          if(tempresult[strlen(tempresult)-1] < 3)
          {

          }
          else{
            i = 1000;
            palindrome = 0;
            printf("Error OVER 4294967295\n");
          }
        }
      }
      else{
        i = 1000;
        printf("Complete LOOP No Error\n");
      }




    for(int i = 0; i < 1000; i++)
    {
      count = i;
      printf("%u result         %u\n",i,result);
      printf("%u reverse        %u\n",i,reverse);
      printf("%u result+reverse %u\n\n",i,result+reverse);
      if(result != reverse ){
        char tempresult[15];
        char tempreverse[15];
        itoa(result,tempresult,10);
        itoa(reverse,tempreverse,10);
        //printf("%c %c\n",tempresult[0], tempreverse[strlen(tempreverse)-1]);
        if(result+reverse < 4294967295 &&tempresult[0] == tempreverse[strlen(tempreverse)-1]){

          result = result+reverse;
          char tempresult[15];
          itoa(result,tempresult,10);
          reverse=functionreverse(tempresult);
        }
        else
          i=1000;
      }
      else{
        i = 1000;
      }

    }
    if(count < 999)
    {
      printf("END LOOP result %u %u\n",count,result);
    }
    else
      printf("END LOOP not palindrome found\n");
    //งอลลลลลลลลลลลลลลลลลลลลลลลลลลลลลลล เลขหลักเดียวก็ทำได้

}

void main(){
  printf("reverseAndAdd PROGRAM CHALLANGE\n");
  printf("EXAMPLE : 505 \n");
  char Receive[15];
  Receive[0] = '1';
  while(Receive[0] != '0')
  {
    scanf("%s",Receive);
    //printf("%u\n",functionreverse(Receive));
    //printf("%d\n",strlen(Receive));
    if(Receive[0] != '0')
      ReverseAndAdd(Receive);

  }
    printf("\n\n***************************END PROGRAM***************************\n\n");
}
*/
