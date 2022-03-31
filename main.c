//
//  main.c
//  3
//
//  Created by hoang minh on 30/03/2022.
//

#include <stdio.h>
int sum(int a, int b);
int hieu(int a, int b);
int main(){
  int a,b;
  char c;
  printf("nhapa");
  scanf ("%d", &a);
  printf("nhapb");
  scanf ("%d", &b);
  printf("nhapc");
    fflush(stdin);
  scanf ("%c", &c);
  switch(c){
    case '+':
      printf("%d+%d=%d", a,b,sum(a,b));
    break;
    case '-':
      printf("%d-%d=%d", a,b,hieu(a,b));
    break;
    default :
    break;
    
    
    
}
  }
int sum(int a, int b) {
  return a+b;
  
  }
int hieu(int a, int b) {
  return a-b;
  
  }
