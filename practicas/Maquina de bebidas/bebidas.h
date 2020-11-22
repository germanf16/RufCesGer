#define glass 2120 
#define CUBA_TIME 	1000000
#define VALENCIAWATER_TIME 		200000
#define GINTONIC_TIME 	    800000
 
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

typedef enum
{
	enIce = 0,
	enRon,
	enCocacola,
	enValenciawater,
	enOrangejuice,
	enGin,
	enVodka,
	enCava,
	enGintonic,
	enTonicwater,
	enLemonslices,
	Delay
}tenStates;