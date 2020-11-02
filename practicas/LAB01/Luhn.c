#include "stdio.h"
#include "Luhn.h"


void main (void)
{
	
    uint8 au8TARJETNUMBER[16]={5,4,6,7,2,8,3,6,9,8,7,7,6,6,4,4};
	uint8 u8Check=0;

	    printf("TARJETNUMBER");
	        for(int n=0; n<16; n++)
	            {
	                printf("%d", au8TARJETNUMBER[n]);
	                    }
	                        u8Check=u8LuhnCheck(&au8TARJETNUMBER[0]);
	                            if(u8Check==0)
	                                {
	                                printf("TARJETA VALIDA");
	                                }
	                                else
                                    	{
                                    	    printf("TARJETA INVALIDA");
                                    	}

                                            }	

                                                uint8 u8LuhnCheck (uint8 *pu8Data)
                                                {
                                                	uint8 u8TTARJETNUMBER=0;
                                                	uint8 u8Check=0;
                                                	for(int i=0; i< TARJET_NUMBER_LENGHT;++i)
                                                	            {
                                                	                if(i%2==0)
                                                	            {
                                                	                //nothingtd
                                                	            }
                                                	                    else
                                                                    	    {
                                                                    	        printf("INGRESAR OTRA TARJETA");
                                                                    	    }
                                                                                            	}
                                                                                            }