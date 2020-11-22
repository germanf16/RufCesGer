#include "stdio.h" 
#include "stdlib.h" 
#include "bebidas.h"


int main(void)
{
	uint8 menu[]="\n 1.CUBA \n 2.VALENCIAWATER \n 3.GINTONIC\n";
	tenStates encheckweight = 0;
	tenStates enchange = 0;
	unsigned int u8Delay = 0;
	uint8 u8number=0;
	uint16 u16glass=0;

	while(1)
	{
      printf("Please put the conteiner or glass\n You already put the glass?\n");
      printf("if it is already done put 2120 and if it is not already done 0\n");
      scanf("%d",&u16glass); 

       if(u16glass==glass)
       {  
          printf("Good Afternoon\n What drink can we offer for you:%s",menu);
	      scanf("%d",&u8number);
	      switch(u8number)
	        {
	         	case 1:
	         	{
                    switch  (encheckweight)
	         	        {
	         	        	case enIce:
	         	        	{
                               printf("ice serve\n");
                               u8Delay = CUBA_TIME;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enRon;
	         	        	}

	         	        	case enRon:
	         	        	{
                               printf("ron serve\n");
                               u8Delay = CUBA_TIME;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enCocacola;
	         	        	}
                            
                            case enCocacola:
	         	        	{
                               printf("cocacola serve\n");
                               u8Delay = CUBA_TIME;
                               while(u8Delay--);
                               encheckweight=Delay;
                                 encheckweight=Delay;	

                             }         	        	

	         	        
	         	        	case Delay:
	         	        	{
	         	        		printf("Everything is fine\n");
	         	        		encheckweight=enchange;
	         	        	}
	         	        }
	         	        printf("The drink is serve\n");
                        break;
	         	}
	         	break;       
	   	        
                	   	        case 2:
                	   	        {
                                    switch  (encheckweight)
                	         	        {
                	         	        	case enIce:
                	         	        	{
                                               printf("ice serve\n");
                                               u8Delay = VALENCIAWATER_TIME;
                                               while(u8Delay--);
                                               encheckweight=Delay;
                                               enchange=enValenciawater;
                	         	        	}
                
                
                	         	        	case enValenciawater:
                	         	        	{
                                               printf("orange juice serve\n");
                                               u8Delay = VALENCIAWATER_TIME ;
                                               while(u8Delay--);
                                               encheckweight=Delay;
                                               enchange=enGin;
                	         	        	}
                
                	         	        	case enGin:
                	         	        	{
                                               printf("gin serve\n");
                                               u8Delay = VALENCIAWATER_TIME;
                                               while(u8Delay--);
                                               encheckweight=Delay;
                                               enchange=enVodka;
                	         	        	}
                
                	         	        	case enVodka:
                	         	        	{
                                               printf("vodka serve\n");
                                               u8Delay = VALENCIAWATER_TIME;
                                               while(u8Delay--);
                                               encheckweight=Delay;
                                               enchange=enCava;
                	         	        	}
                
                	         	        		case enCava:
                	         	        	{
                                               printf("cava serve\n");
                                               u8Delay = VALENCIAWATER_TIME;
                                               while(u8Delay--);
                                               encheckweight=Delay;
                                            
                	         	        	}
                               
                	         	        	case Delay:
                	         	        	{
                	         	        		printf("all good\n");
                	         	        		encheckweight=enchange;
                	         	        	}
                	         	        }
                	         	        printf("The drink is served\n");
                                        break;
                	   	        }
                                break;
                	   	        
                                	   	        case 3:
                                	   	        {
                                	   	        	switch  (encheckweight)
                                	         	        {
                                	         	        	case enGintonic:
                                	         	        	{
                                                               printf("gin serve\n");
                                                               u8Delay = GINTONIC_TIME ;
                                                               while(u8Delay--);
                                                               encheckweight=Delay;
                                                               enchange=enIce;
                                	         	        	}
                                
                                	         	        	case enIce:
                                	         	        	{
                                                               printf("ice serve\n");
                                                               u8Delay = GINTONIC_TIME ;
                                                               while(u8Delay--);
                                                               encheckweight=Delay;
                                                               enchange=enTonicwater;
                                	         	        	}
                                                            
                                                            case enTonicwater:
                                	         	        	{
                                                               printf("tonic water serve\n");
                                                               u8Delay = GINTONIC_TIME ;
                                                               while(u8Delay--);
                                                               encheckweight=Delay;
                                                               enchange=enLemonslices;
                                	         	        	}
                                
                                	         	        	case enLemonslices:
                                	         	        	{
                                                               printf("soda serve\n");
                                                               u8Delay = GINTONIC_TIME ;
                                                               while(u8Delay--);
                                                               encheckweight=Delay;
                                                             
                                                             }
                                	         	     
                                	         	        	case Delay:
                                	         	        	{
                                	         	        		printf("Everything is fine\n");
                                	         	        		encheckweight=enchange;
                                	         	        	}
                                	         	        }
                                	         	        printf("The drink is served\n");
                                                        break;
                                	   	        }
                                	   	        default:
                                	         	     break;
	        
	         }
       } 
	}
}