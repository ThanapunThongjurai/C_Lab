#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
void PrimaryArithmetic(char Num1[],char Num2[]){

    int limitOfNumber = 20;
    //char Num1[limitOfNumber];
    //char Num2[limitOfNumber];
    char TempZero[limitOfNumber];
    char Num3[limitOfNumber];

    TempZero[0] = 0;
    //scanf("%s",Num1);
    //scanf("%s",Num2);

    //printf("%d\n",strlen(Num1));
    //printf("%d\n",strlen(Num2));
    //รับค่ามาเป็น string ง่ายกว่ามั้ง

    //ทำให้หลักเท่ากัน
    if(strlen(Num1) < strlen(Num2))
    {
      for(int i = strlen(Num1) ; i <strlen(Num2);i++)
      {
        strcat(TempZero,"0");
      }
      strcat(TempZero,Num1);
      strcpy(Num1, TempZero);

    }
    else if(strlen(Num1) > strlen(Num2))
    {
      for(int i = strlen(Num2) ; i <strlen(Num1);i++)
      {
        strcat(TempZero,"0");
      }
      strcat(TempZero,Num2);
      strcpy(Num2, TempZero);
    }

    //แปลง char[] to int[]
    int Inum1[20],
        Inum2[20];
    for(int i= 0; i <strlen(Num1) ; i ++)
    {
      Inum1[i] = Num1[i];
      Inum1[i] = Inum1[i] - 48;
      //printf("%d",Inum1[i]);
    }
    for(int i= 0; i <strlen(Num2) ; i ++)
    {
      Inum2[i] = Num2[i];
      Inum2[i] = Inum2[i] - 48;
      //printf("%d",Inum2[i]);
    }

    //printf("%s\n",Num1);
    //printf("%s\n",Num2);
    //printf("%d\n",strlen(Num1));
    //printf("%d\n",strlen(Num2));

    //หัวใจของโปรแกรม
    int CountCarry = 0;
    int TempPlus = 0;
    int TempCarry[strlen(Num1)];

    //printf("%d\n",TempCarry[strlen(Num1)-1]);
    for(int i = strlen(Num1)-1 ; i >= 0; i -- )
    {
      if(TempCarry[i] != 1)
        TempCarry[i] =0;
      TempPlus = Inum1[i]+Inum2[i]+TempCarry[i];
      if(TempPlus >= 10)
      {
        CountCarry++;
        if(i != 0)
          TempCarry[i-1] =1;
      }
      //printf(" %d  +  %d + %d = %d \n",Inum1[i],Inum2[i],TempCarry[i],TempPlus);
    }
      //printf(" TempCarry[i]  %d\n",strlen(TempCarry));
    if(CountCarry != 0)
      printf(" %d  carry operations\n",CountCarry);
    else
      printf("No carry operation\n");
}

void main(){
  printf("PrimaryArithmetic PROGRAM CHALLANGE\n");
  int limitOfNumber = 20;
  char Num1[limitOfNumber];
  char Num2[limitOfNumber];

  int loop = 1;
  while(loop == 1)
  {

    printf("EXAMPLE :999 999\n");
    printf("ENTER NUMBER :");
    scanf("%s",Num1);
    scanf("%s",Num2);
    if(strlen(Num1) < 10 && strlen(Num2) < 10 && Num1[0] != '0' && Num2[0] != '0')
        PrimaryArithmetic(Num1,Num2);
    else
      loop = 0;
  }
  printf("\n\n***************************END PROGRAM***************************\n\n");
}
