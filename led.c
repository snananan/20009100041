#include <reg52.h>
#include<instrins.h>
 
#define uchar unsigned char
 
#define uint  unsigned int
 
uchar code led[]={0xfe,0xfb,0xfd ,0xf7,0xef,0xbf,0xdf,0x7f};
 
delay(uint z)
 
{
 
   uint x,y;
 
   for(x=z;x>0;x--)
 
      for(y=110;y>0;y--);
 
}
 
main( )
 
{
 
   uint i;
 
   while(1)
 
   {
 
   P2=led[];
 
   delay(500);
 
   _crol_(led,1);
 
   }
 
}
