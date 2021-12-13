#include <stdio.h>

int main(){
  int height;
  printf("enter value of height?\n");
  scanf("%d" , &height);
  if(height<9)
  {for (int i = 0; i < height; i++)
     {
     for (int j = 0; j < i+1; j++)
     {
     printf("*");
     }
     printf("\n");
     }}
     else
     { printf("ENTER VALUE AGAIN");
     }
    return 0;

}