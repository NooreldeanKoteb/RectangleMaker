#include <stdio.h>
#include <stdlib.h>
void menu(char *menu_choice);
char change(char c);
int num (int n);
void rectangle_1(int n,char c);
void rectangle_2(int n, char c);

void main(void){  
    char usr_input;
    char c = ' ';
    int n = 0;
    while (1 != 0){
      menu(&usr_input);
      switch(usr_input){
          case '1':
              rectangle_1(n,c);
              break;
          case '2':
              rectangle_2(n,c);
              break;
          case 'c':
              c = change(c);
              break;
          case 'C':
              c = change(c);
              break;
          case 'n':
              n = num(n);
              break;
          case 'N':
              n = num(n);
              break;
          case 'q':
              exit(0);
          case 'Q':
              exit(0);
          default:
              printf("Error: Incorrect Input!");
          }
    }
}

void menu(char *menu_choice) {
    *menu_choice = ' ';
    char usr_val[100];
    printf("Menu:\n");
    printf("Enter/Change Charcheter: C\n");
    printf("Enter/Change Number: N\n");
    printf("Print Rectangle Type 1 (Border Only): 1\n");
    printf("Print Rectangle Type 2 (Filled in): 2\n");
    printf("Quit Program: Q\n");
    fgets(usr_val,100,stdin);
    sscanf(usr_val,"%c", menu_choice);
    return;
}

char change(char c){
  char in_val[100];
  printf("Enter a Character:");
  fgets(in_val,100,stdin);
  sscanf(in_val,"%c", &c);
  return c;
}

int num (int n){
  n = 0;
  int in_val[100];
  while (n < 1|| n>15){
    printf("Enter Value Between 1-15:");
    fgets(in_val,100,stdin);
    sscanf(in_val,"%d", &n);
  }
  return n;
}

void rectangle_1(int n, char c){
  for (int loop = 0; loop<n; loop++){
      for(int loop2 = 0; loop2<n; loop2++){
      if ((loop == 0) || (loop == n-1)
      || (loop2 ==0) || (loop2==n-1)){
        if((loop2==0)&&(loop>0)){
          printf("\n");
        }
        printf("%c", c);
      }else{
        printf(" ");
      }
    }
  }
  printf("\n");
  return;
}

void rectangle_2(int n,char c){
  for (int loop = 0; loop<n; loop++){
    if (loop != 0){
      printf("\n");
    }
    for(int loop2 = 0;loop2<n;loop2++){
      printf("%c", c);
    }
  }
  printf("\n");
  return;
}

