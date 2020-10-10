#include "stdio.h"
#include "GENFUN.h"

void main ( void )

uint8 au8BufferTest[12] = "HelLo There!";
	uint8 au8BufferTest2[12] = "TrAvis";
	uint8 u8FamaOcurrences = 0;

/*func caps on */
	printf("\nCaps On\n");
	printf("Buffer before function %s\n", au8BufferTest);
	GENFUN_vCapsOn( &au8BufferTest[0], 12);
	printf("Buffer after function %s\n", au8BufferTest);

	/*func caps off*/
	printf("\nCaps Off\n");
	printf("Buffer before function %s\n", au8BufferTest);
	GENFUN_vCapsOff( &au8BufferTest[0], 12);
	printf("Buffer after function %s\n", au8BufferTest);

	printf("\nGet Ocurrence\n");
	printf("Fama:");
	printf("%s\n", au8BufferTest2);
	printf("Ocurrence target: %c\n", ASCII_TARGET_CODE);
	u8FamaOcurrences = GENFUN_u8GetOccurrence ( &au8BufferTest2[0], ASCII_TARGET_CODE, 12 );
	printf("Ocurrences in array: %i\n", u8FamaOcurrences);


void GENFUN_vCapsOn ( uint8 *pu8Src, uint8 u8SizeOfList )
{
	while( u8SizeOfList != 0 )
	{
		if( *pu8Src >= ASCII_LOW_THRESHOLD_CAPSON_TO_OFF && *pu8Src <= ASCII_HIGH_THRESHOLD_CAPSON_TO_OFF )
		{
			*pu8Src -= ASCII_CONVERSION_FACTOR;
		}
		else
		{
			/*nothing to do */
		}
		pu8Src++;
		u8SizeOfList--;
	}
}


void GENFUN_vCapsOff (uint8 *pu8Src, uint8 u8SizeOfList)
{
	while( u8SizeOfList != 0 )
	{
		if( *pu8Src >= ASCII_LOW_TRESHOLD_TO_ON && *pu8Src <= ASCII_HIGH_TRESHOLD_TO_ON )
		{
			*pu8Src += ASCII_CONVERSION_FACTOR	;
		}
		else
		{
			//Nothing to do
		}
		pu8Src++;
		u8SizeOfList--;
	}
}

uint8 GENFUN_u8GetOccurrence ( uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList )
{
	uint8 u8FamaOcurrences = 0;

	while ( u8SizeOfList != 0 )
	{
		if( *pu8Src ==  u8Target )
		{
			u8FamaOcurrences++;
		}
		else
		{
			//nothing to do 
		}
	pu8Src++;
	u8SizeOfList--;
	}
return u8FamaOcurrences;
}