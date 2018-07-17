#include<stdio.h>
#define UINT unsigned int 
void Leds_Contrl(void)
{
  UINT led=1;
  UINT i;
  for(i=0;i<100;i++)
  {
	led=led*2;
	if(led==0x00)
	{
		led=0;
	}
  }
}
