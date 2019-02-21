#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void BOOM(int m,int n){
    //int m = 0;
    //int n = 0;
    int countM= 0;
    //scanf("%d",&m);
    //scanf("%d",&n);
    //printf("%d x %d\n",m,n);
    char mn[m][n];
    while(countM < m)
    {
        char temp[n+1];
        scanf("%s",temp);
        //printf("accep input");
        for(int i = 0 ; i < n ; i++)
        {
          mn[countM][i] = temp[i];
          //printf("%c",mn[countM][i] );
        }
        //printf("\n");
      countM++;
    }
    printf("\n");
    int field[m][n];
    for(int i = 0;i<m ;i++)
      for(int j = 0 ; j < n ; j++)
        field[i][j] = 0;

    for(int i = 0;i<m ;i++)
      for(int j = 0 ; j < n ; j++){
        if(mn[i][j] == '*'){
          //up
          if(i -1 != -1 )
          {
            if(j - 1 != -1)
              field[i-1][j-1]++;
            field[i-1][j]++;
            if(j +1 != n)
              field[i-1][j+1]++;
          }

          //mid
          if(j - 1 > -1)
            field[i][j-1]++;
          if(j +1 < n)
            field[i][j+1]++;

          //bottom
          if(i +1 < m)
          {
            if(j - 1 > -1)
              field[i+1][j-1]++;
            field[i+1][j]++;
            if(j + 1 < n)
              field[i+1][j+1]++;
          }
        }
      }
    /*
    for(int i = 0 ; i < m ; i++)
    {
      for(int j = 0 ; j < n ; j++)
      {
        /*
          char io[1];
          io[1] ='0';
          io[0] ='0';
          printf("pass prosess\n");
          printf("%c\n",io[0-1]);
          เนื่องจากความมักง่ายของกระผมหากเราเรียนใช้
          io[-1] จะมีค่าเท่านกับ @ และจะไม่ได้เป็นค่า random
          ทำให้กระผมไม่เขียน if ถ้าหากว่าามีค่า [-1]
          printf("%c\n",io[2]); และค่าที่มากกว่า +1
        */
        /*
        int count = 0;
        field[i][j] = '0';
        if(mn[i][j] == '*'){
          field[i][j] = '*';
        }
        else{
          //top
          if(mn[i-1][j-1] == '*'){count++;}
          if(mn[i-1][j]   == '*'){count++;}
          if(mn[i-1][j+1] == '*'){count++;}
          //middle
          if(mn[i][j-1] == '*'){count++;}
          if(mn[i][j]   == '*'){count++;}
          if(mn[i][j+1] == '*'){count++;}
          //bottom
          if(mn[i+1][j-1] == '*'){count++;}
          if(mn[i+1][j]   == '*'){count++;}
          if(mn[i+1][j+1] == '*'){count++;}
          //char tempfiled = count;
          field[i][j] = count+48;
        }

      }
    }
    */
    for(int i = 0 ; i < m ; i++)
    {
      for(int j = 0 ; j < n ; j++)
      {
        if(mn[i][j] == '*')
        {
          printf("%c",mn[i][j]);
        }
        else
          printf("%d",field[i][j]);
      }
      printf("\n");
    }
}

void main(){
  printf("Minesweeper PROGRAM CHALLANGE\n");
  int m = 0;
  int n = 0;
  int loop = 1;
  while(loop == 1)
  {

    printf("EXAMPLE : 4 4 \n");
    printf("ENTER NUMBER LENGTH :");
    scanf("%d",&m);
    scanf("%d",&n);
    if(m > 0 && m <= 100 && n > 0 )
    {
      printf("EXAMPLE : *.... \n\n");
      BOOM(m,n);
    }

    else
      loop = 0;
  }
  printf("\n\n***************************END PROGRAM***************************\n\n");
}
