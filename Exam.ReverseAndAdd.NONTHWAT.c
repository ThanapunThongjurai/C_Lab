// by Nonthwat zaza @ECP1N Rmuit kkc
// ReverseAndAddQ Homework code
// 98.99% code finalver
#include <stdio.h>
#include <stdlib.h>
long long int SwN=0,Starter=0,Finalnum=0,Num=0,Aws=0,taws=0,SwNtest=0,fixaws=0,semifixaws=0,Finalnumtest=0,SwNII=0,semitaws=0;
long long int Round=0;
long long int reverse(long long N)
{
            while (N != 0)
            {
                SwN = SwN * 10;
                SwN = SwN + N%10;
                N = N/10;
            }
                return SwN;
}

long long int reversetest (long long int N)
{
            while (N != 0)
            {
                SwNtest = SwNtest * 10;
                SwNtest = SwNtest + N%10;
                N = N/10;
            }
                return SwNtest;
}
long long int reverseII(long long int N)
{
    unsigned long long int SwNII=0;
            while (N != 0)
            {
                SwNII = SwNII * 10;
                SwNII = SwNII + N%10;
                N = N/10;
            }
                return SwNII;
}

long long int Plus(long long int Num)
{
    (Finalnum = Starter+Num);
    Round++;
    return Finalnum;
}

long long int Plustest (long long int N)
{
    (Finalnumtest = taws+N);
    Round++;
    return Finalnumtest;
}

long long int main()
{
    long N;
    printf("input Number : ");
    scanf("%u",&N); // รับ N
    Starter = N; // ทดตัวตั้งใน ฟังชัน plus
    Num = reverse(N); // กลับค่า N ใส่ ตัวแปร Num
    Aws = Plus(Num); // เอสเลขกลับค่าไปบวก ได้ aws
    taws = reversetest(Aws); // กลับค่า aws เพื่อเทียบ

    if  (N==Num&&(N!=0))
    {
        printf("0 %u",N);
        return 0;
    }

        if ((N<10)&&(N!=0))
    {
        printf("0 %u",N);
        return 0;
    }

    if (taws != Aws)
    {
    //printf("Aws is %d\n", Aws);
    //printf("taws is %d\n", taws);
        while ((taws != Aws)&&(Round<=1000)&&(N!=0)&&(Aws<4294967295))
        {
            semifixaws=Aws; // aws
            //printf("semiAws is %d\n", semifixaws);
            Aws=Plustest(semifixaws); //นำตัวแปรกลับค่าไปบวก ใส่ aws เหมือนเดิน
            taws = reverseII(Aws);//กลับค่าอีกรอบใส่ taws
            //printf("Aws is %lli\n", Aws);
            //printf("tws is %lli\n", taws);
            //printf("=================\n");
        }           // วน

        if(Aws>4294967295)
        {
                    printf("No palindrom found");
        }
    }
    if ((Round >=1000)&&(N!=0)&&(Aws>4294967295))
    {
        printf("No palindrom found");
    }
    if (taws == Aws&&(Aws<4294967295)&&(N!=0))
        {
            //printf("reverse is %d\n", Num);
            //printf("starter is %d\n", Starter);
            //printf("Aws is %d\n", Aws);
            //printf("taws is %d\n", taws);
            //printf("round is %d\n",Round);
            //printf("\n");
            printf("%lli %lli",Round, Aws);
        }


    return 0;
}
