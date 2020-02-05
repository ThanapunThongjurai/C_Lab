

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    //main Var
    int OperatorCount =5;
    char Operator[]={"++--"};
    char Data[] = {"0000j*09"};
    int MathWant = 9;



    /*
    //input
    scanf("%d",&OperatorCount);
    char Operator[OperatorCount];
    char TempOperator[OperatorCount];

    scanf("%s",TempOperator);
    for(int i = 0 ; i < OperatorCount;i++)
        Operator[i] = TempOperator[i];
    printf("%s\n",TempOperator);

    scanf("%s",Data);
    */



    //MainCode
    char Number[strlen(Data)];
    int Numbersize = 0;
    for(int i = 0, j=0 ; i < strlen(Data); i ++)
    {
        if(Data[i] >= 48 && Data[i] <= 57)
        {
            Number[Numbersize] = Data[i];
            Numbersize++;
        }
    }
    printf("Numbersize %d \n",Numbersize);




    //Pre_Number
    int Pre_Number[Numbersize];
    int Pre_Numbersize = Numbersize;
    for(int i = 0; i < Pre_Numbersize;i++)
    {
        Pre_Number[i] = Number[i]-48;
        //printf("%d,",Pre_Number[i]);
    }
    for(int i= 0;i < Pre_Numbersize;i++)
    {
        printf("%d ",Pre_Number[i]);
    }
    printf("\n");

    //MathNumber
    int MathNumber[strlen(Number)];//เอาไว้เก็บ ตัวเลขจับคู่กัน
        //Pre_Number[] แยกเลข
    int tempMathNumber=0;
    int MathNumbersize = 0;
    for(int i = 0; i < Pre_Numbersize;i++)
    {
        tempMathNumber = (tempMathNumber *10)+Pre_Number[i];
            //printf("%d  ",tempMathNumber);
            if(tempMathNumber > MathWant)
            {

                MathNumber[MathNumbersize] = tempMathNumber/10;
                MathNumbersize++;
                tempMathNumber =  Pre_Number[i];
                if(i == Pre_Numbersize-1)
                {
                    MathNumber[MathNumbersize] = tempMathNumber;
                    MathNumbersize++;
                }
            }
            else if(i == Pre_Numbersize-1)
            {
                    MathNumber[MathNumbersize] = tempMathNumber;
                    MathNumbersize++;
            }
    }
    printf("\n");
    for(int i = 0 ; i < MathNumbersize;i++)
    {
        printf("%d ",MathNumber[i]);
    }
    double answer = MathNumber[0];
    printf("\n");
    for(int i = 1,j=0 ; i <MathNumbersize;i++,j++)
    {
        if(j>= strlen(Operator))
        {
            j = 0;
        }
        printf("%f %c %d",answer,Operator[j],MathNumber[i]);
        if(Operator[j] == '+')
        {
            answer = ceil(answer + MathNumber[i]);
        }
        if(Operator[j] == '-')
        {
            answer = ceil(answer - MathNumber[i]);
        }
        if(Operator[j] == '*')
        {
            answer = ceil(answer * MathNumber[i]);
        }
        if(Operator[j] == '/')
        {
            answer = ceil(answer / MathNumber[i]);
        }
        if(Operator[j] == '%')
        {
            int temp   = answer;
            answer = ceil(temp % MathNumber[i]);
        }

        printf(" = %f\n",answer);

    }
    printf("answer : %f",answer);

    //Debug
    printf("\n\n%d\n",OperatorCount);
    printf("%s\n",Operator);
    printf("%s\n",Data);
    printf("%s\n",Number);
    printf("%d\n",strlen(Number));
}




