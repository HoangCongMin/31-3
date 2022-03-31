//
//  4.c
//  3
//
//  Created by hoang minh on 31/03/2022.
//

#include "4.h"
#include <stdio.h>
 
int indexMin(int m[], int n){
  int i,min;
  
  for(i=0;i<n;i++){
    m[0]=min;
    if(m[i]<min){
      min=m[i];
    }
    }
    printf("minla%d", m[i]);
      
     }
int main()
{
  int m[5],i;
 for(i=0;i<5;i++){
   printf("%d", i);
   scanf("%d", &m[i]);
 }
  indexMin (m,5);
  return 0;


  }
