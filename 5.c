//
//  5.c
//  3
//
//  Created by hoang minh on 31/03/2022.
//

#include "5.h"
#include<stdio.h>
#include <math.h>
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
int thuong(int a, int b);
int main(){
  int a,b,i;
  int s1,s2,s3,chucnang;
  float s4;
  printf("\tTINH TOAN");
    
    printf("1.Nhap so\n");
    printf("2.Tinh tong\n");
    printf("3.Tinh hieu\n");
    printf("4.Tinh tich\n");
    printf("5.Tinh thuong\n");
    printf("6.Thoat\n");
    for(i=1;i<7;i++){
  printf("chon");
  scanf("%d",& chucnang);
  switch(chucnang)  {
  case 1:
    printf("nhapso\n");
    scanf("%d%d", &a,&b);
    break ;
  case 2:
    s1=tong(a,b);
    printf("tong%d\n", s1);
    break;
   case 3:
    s2 = hieu(a,b);
    printf("hieu%d\n", s2);
    break;
  case 4:
    s3 = tich(a,b);
    printf("tich%d\n", s3);
    break;
  case 5:
    s4 = thuong (a,b);
    printf("tich%f\n", s4);
    break;
    case 6:
    printf("thoat");
    
    }}
  return 0;
  }
int tong(int a, int b){
  int s1;
  s1=a+b;
  return s1;
}
int hieu(int a, int b){
  int s2;
  s2=a-b;
  return s2;
}
int tich(int a, int b){
  int s3;
  s3=a*b;
  return s3;
}
int thuong(int a, int b){
  float s4;
  s4=(float)a/b;
if(b!=0){
     return s4;
    }
else{
return 0;}

}
