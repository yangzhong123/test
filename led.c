#include<stdio.h>
#define UINT unsigned int 
void Leds_Contrl(void)
{
  UINT led=1;
  UINT i;
  UINT j;
  for(i=0;i<100;i++)
  {
	for(j=0;j<100;j++)
	{
	  led=led*2;
	  if(led==0x00)
	  {
		led=1;
	  }
	}
  }
}
