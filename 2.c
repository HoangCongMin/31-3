//
//  2.c
//  3
//
//  Created by hoang minh on 31/03/2022.
//

#include "2.h"
#include <stdio.h>
 
int boi50(int n)
{
    if(n % 50 == 0 )
    {
        return 1;
    }
    return 0;
}
 
int main()
{
    int x[5],i;
  for(i=0;i<5;i++){

 
    printf("Nhap vao so x can kiem tra : ");
    // scanf("%d", &x);
  scanf("%d", &x[i]);}
 for(i=0;i<5;i++){
   int kq=boi50(x[i]);
    if(kq == 0)
    {
        printf("Day khong phai la so chia het cho 50\n");
    } else {
        printf("Day la so chia het cho50\n");
    }
   }

