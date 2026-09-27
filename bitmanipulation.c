#include<stdio.h>
int setbit( int pos,int val)
{
  val=val|(1<<pos)
  return val;    
}

int main(){
    int val=25;
    int pos=3;
    number=setbit(25,3);
    printf(" value after setting the 3rd bit %d", number);
    return 0;
}