//
//  1.c
//  3
//
//  Created by hoang minh on 30/03/2022.
//

#include "1.h"
#include <stdio.h>
#include <math.h>
int p(int a, int b ,int c);
int main(){
  int a,b,c,k;
  float s;
  printf("nhapa");
  scanf("%d", &a);
  printf("nhapb");
  scanf("%d", &b);
  printf("nhapc");
  scanf("%d", &c);
  if (a+b>c&&a+c>b&&b+c>a){
    printf("thihople");
    k=p(a,b,c);
    s=sqrt(k*(k-a)*(k-b)*(k-c));
    printf("%d%d%d%d%f", &s);
    
    }else
    printf("khonghople");
  }

int p(int a, int b ,int c) {
  
  return (a+b+c)/2;
  
  }
