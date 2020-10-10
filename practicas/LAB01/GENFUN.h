// data types
typedef unsigned char uint8;

// prototypes

void GENFUN_vCapsOn ( uint8 *pu8Src, uint8 u8SizeOfList );

void GENFUN_vCapsOff ( uint8 *pu8Src, uint8 u8SizeOfList );

uint8 GENFUN_u8GetOccurrence ( uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList );

uint8 GENFUN_u8GetAverage( uint8 *pu8Src, uint8 u8SizeOfList );

void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList);

void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);

void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);

void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest);

void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal);