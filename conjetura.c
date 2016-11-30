////////////////////////////
/////Daniel Villalobos/////
///Conjetura de Collatz///
/////////////////////////
#include <stdlib.h>
#include <stdio.h>
void serie(int);

int main(){
int num;
printf ("Introduce un numero para empezar la serie: \n");
scanf("%d",&num);
serie(num);
}

void serie(int num1){
  while (num1 > 1){
    if (num1 % 2 == 0){
    num1 = num1 / 2;
    }else{
      num1 = (num1 * 3) + 1;
    }
    printf ("%d \n", num1);
  }
}
