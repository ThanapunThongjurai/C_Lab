#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>


/*

ใช้ itoa ฟังก์ชันจะง่ายมากๆกันเลยทีเดียว
เราไม่เราไม่ชอบ เอาแบบยากๆนั้ละะ 555
C – strrev() function
*/


int functionNotReverse(char Receive[])
{

  //แปลงเลขอย่างเดียวไม่กลับค่า
  int result = 0;
  int len = strlen(Receive);
  for(int i=0; i<len; i++){
    result = result * 10 + ( Receive[i] - '0' );
    //printf("%d\n",result);
  }
  return result;
}
//ได้ตัวกลับค่ามาแล้วววววววววววววววว
int functionReverse(char Receive[])
{
  int result = 0;
  int len = strlen(Receive);
  char Reversestring[len];

  //เอาไว้กลับค่า
  for(int i = 1 ; i <=len ; i++)
  {
    Reversestring[i] = Receive[len-i];
    //printf("%d\n",Reversestring[i]-48);
    //ในที่สุดก็ได้แล้ววววววววววววววววววเย้
  }

  //เอาไว้แปลงเลข
  for(int i=1; i<=len; i++){
    //printf("%d before result \n",Reversestring[i]-48);
    result = result * 10 + ( Reversestring[i] - '0' );
    //printf("%d\n",result);
  }
  return result;
}

void main(){

    //unsigned int MaxOfLoop;
    char Receive[50];
    scanf("%s", Receive);

    //อัลกอ
    int Reverse =     functionReverse(Receive);
    int NotReverse =  functionNotReverse(Receive);
    int count =       0;
    int result =      functionNotReverse(Receive);
    int palindrome = 1;
    //ลูปนรก

    //unsigned long

    for(int i = 0; i < 100000; i++)
    {
      if(result != Reverse){
        //printf("result %d\n", result);
        //printf("Reverse %d\n", Reverse);
        result = result+Reverse;

        int num = result;
        char snum[10];
        // convert 123 to string [buf]
        itoa(num, snum, 10);

        Reverse = functionReverse(snum);

        int tempcheck = strlen(snum);
        if(tempcheck >= 9)
        {
          palindrome = 0;
          i == 4294967293;
        }
        //เขียนฟังก์ชันแปลงเลขเป็นchar[]เอากับเขาดิ
        //printf("result %d\n", result);
        //printf("%d \n\n",i+1);
      }
      else{
        count = i;
        i = 4294967294;
        //เก็บของออกนอกลูปนรก
      }
    }
    if(palindrome != 0)
    {
      printf("END LOOP 4294967295 result %d %d\n",count,result);
    }
    else
      printf("END LOOP 4294967295 not palindrome found\n");
    //งอลลลลลลลลลลลลลลลลลลลลลลลลลลลลลลล เลขหลักเดียวก็ทำได้
}
//จบแล้วววววววววววววววววววววววววววววววววววววววววววววววววววววววว
