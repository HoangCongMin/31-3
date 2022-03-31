//
//  6.c
//  3
//
//  Created by hoang minh on 31/03/2022.
//

#include "6.h"
#include<stdio.h>
#include <math.h>
float dientich(float a, float b);
float chuvi(float a, float b);
int main(){
  float a,b;
  int s;
  printf("nhâpavab");
  scanf("%f%f", &a,&b);
switch(s){
  case 1:
  s= chuvi(a,b);
  printf("chuvila%f", s);
  break;
  case 2:
  s= dientich(a,b);
  printf("chuvila%f", s);
  break;}
  return 0;
}
float dientich(float a, float b){
  float s;
  s=a*b;
  printf("%f", s);
  return s;
}
float chuvi(float a, float b){
  float c;
  c=a*b;
  printf("%f", c);
  return c;
}
