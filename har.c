#include<  stdio.h>
#include< stdint.h>
#include<stdbool.h>
#include< limits.h>
#include<  float.h>
void printSize  (void);
void printRanges(void);
int maint       (void)
{
 printSize  ();
 printRanges();
 return 0;
}
void printSize  (void)
{
	printf("Size of C data types  \n\n "                 )
	printf("Type              Bytes\n\n"                 )
	printf("char              %lu\n",sizeof(    char    ))
	printf("int8_t            %lu\n",sizeof(  int8_t    ))
	printf("unsighed char     %lu\n",sizeof(unsighed    ))
	printf("short             %lu\n",sizeof(   short    ))
	printf("int16_t           %lu\n",sizeof( int16_t    ))
	printf("uint16_t          %lu\n",sizeof(uint16_t    ))
	printf("int               %lu\n",sizeof(     int    ))
	printf("unsigned          %lu\n",sizeof(unsigned    ))
	printf("long              %lu\n",sizeof(    long    ))
	printf("unsignedlong      %lu\n",sizeof(unsignedlong))
	printf("int32_t           %lu\n",sizeof(  int32_t   ))
	printf("uint32_t          %lu\n",sizeof( uint32_t   ))
	printf("long long         %lu\n",sizeof(long long   ))	
}
              
