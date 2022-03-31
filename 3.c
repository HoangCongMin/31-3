//
//  3.c
//  3
//
//  Created by hoang minh on 31/03/2022.
//

#include "3.h"
#include <stdio.h>
 
int reverse(int m[], int n){
  int i;
  printf("nhapvao");
  for(i=n-1;i>=0;i--){
    printf("%d%d",i+ 1, m[i]);
    }
  }
int main()
{
  int m[5],i;
 for(i=0;i<5;i++){
   printf("%d", i+ 1);
   scanf("%d", &m[i]);
 }
  reverse (m,5);
  return 0;


  }
