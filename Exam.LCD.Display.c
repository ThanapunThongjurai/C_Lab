// by Thanapun Thongjurai @ECP1N Rmuit kkc
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void LCDPRINTF(int length ,char Number[]){
                      //0   1   2   3   4   5   6   7   8
  char LCD[10][10] = {{'E','-','|',' ','|','-','|','E','|'},  //0
                      {'E',' ',' ',' ','|',' ',' ','E','|'},  //1
                      {'E','-',' ','-','|','-','|','E',' '},  //2
                      {'E','-',' ','-','|','-',' ','E','|'},  //3
                      {'E',' ','|','-','|',' ',' ','E','|'},  //4
                      {'E','-','|','-',' ','-',' ','E','|'},  //5
                      {'E','-','|','-',' ','-','|','E','|'},  //6
                      {'E','-',' ',' ','|',' ',' ','E','|'},  //7
                      {'E','-','|','-','|','-','|','E','|'},  //8
                      {'E','-','|','-','|','-',' ','E','|'},  //9
                      };

  //int length = 0;
  //char Number[10];
  //scanf("%d",&length);
  //scanf("%s",Number);
  for(int segmentNo=1;segmentNo<=5;segmentNo++){
    if(segmentNo%2!=0){
      for(int i=0;i<strlen(Number);i++){
        int postNo = Number[i]-48;
        printf(" ");
        for(int j=0;j<length;j++){
          printf("%c",LCD[postNo][segmentNo]);
        }
        printf(" ");
      }
      printf(" \n");
    }
    else{
      for(int k=0;k<length;k++){
        if(segmentNo==2){
          for(int i=0;i<strlen(Number);i++){
            int postNo = Number[i]-48;
            printf("%c",LCD[postNo][2]);
            for(int j=0;j<length;j++){
              printf(" ");
            }
            printf("%c",LCD[postNo][4]);
          }
          printf(" \n");
        }
        else{
          for(int i=0;i<strlen(Number);i++){
            int postNo = Number[i]-48;
            printf("%c",LCD[postNo][6]);
            for(int j=0;j<length;j++){
              printf(" ");
            }
            printf("%c",LCD[postNo][8]);
          }
          printf(" \n");
        }
      }
    }
  }
}

void main(){
  printf("LCD.DISPLAY PROGRAM CHALLANGE\n");
  int length = 0;
  char Number[10];
  int loop = 1;
  while(loop == 1)
  {

    printf("EXAMPLE :5 123456789\n");
    printf("ENTER NUMBER LENGTH AND NUMBER :");
    scanf("%d",&length);
    scanf("%s",Number);
    if(length > 0 && Number[0] != ' ')
        LCDPRINTF(length,Number);
    else
      loop = 0;
  }
  printf("\n\n***************************END PROGRAM***************************\n\n");
}
