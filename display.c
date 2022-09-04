#include <pic14/pic12f675.h>

void delay (unsigned int tiempo); // Funcion delay
void ejecucion();
int contadorg=0;

void main(void) {
    //DECLARACION REGISTROS
    TRISIO = 0b00100000;
    GP3=0;
    ANSEL = 0; 
    unsigned int time = 100; 

    //PRUEBA PARA LIMITE DE INTENTOS
    //############PREGUNTAR####################

    
    //delay(1000);
        GP0=0;
        GP1=0;
        GP2=0;
        GP4=0;
        
        ejecucion();
        

}

void ejecucion()
{       unsigned int time = 100; 
        //int random = 0; 
        int contador=0;
        
        
            while ( 1 ) 
                {
                    
                    while(contador<17)
                    {
                        //opciones de numeros infinitas entre el 0 y el 9
                        for (int random = 0; random < 100; random++){
                            GP4 = 0;            
                            if(GP5 == 1)
                                { 
                                int unidad = random%10;
                                int dec = (int)random/10;
                                
                                contador+=1;
                                switch (dec)
                                { 
                                    case 0:
                                        GP0=0;
                                        GP1=0;
                                        GP2=0;
                                        GP4=0;
                                        delay(time);
                                        
                                        break;
                                    case 1:
                                        
                                        GP0=1;
                                        GP1=0;
                                        GP2=0;
                                        GP4=0;
                                        delay(time);
                                        
                                        break;
                                    case 2:
                                        GP0=0;
                                        GP1=1;
                                        GP2=0;
                                        GP4=0;
                                        delay(time);
                                        
                                        break;
                                    case 3:
                                        GP0=1;
                                        GP1=1;
                                        GP2=0;
                                        GP4=0;
                                        delay(time);
                                        
                                        break;
                                    case 4:
                                        GP0=0;
                                        GP1=0;
                                        GP2=1;
                                        GP4=0;
                                        delay(time);
                                        break;
                                    case 5:
                                        GP0=1;
                                        GP1=0;
                                        GP2=1;
                                        GP4=0;
                                        delay(time);
                                        
                                        break;
                                    case 6:
                                        GP0=0;
                                        GP1=1;
                                        GP2=1;
                                        GP4=0;
                                        delay(time);
                                        
                                        break;
                                    case 7:
                                        GP0=1;
                                        GP1=1;
                                        GP2=1;
                                        GP4=0;
                                        delay(time);
                                        
                                        break;
                                    case 8:
                                        GP0=0;
                                        GP1=0;
                                        GP2=0;
                                        GP4=1; 
                                        delay(time);
                                        
                                        break;
                                    case 9:
                                        GP0=1;
                                        GP1=0;
                                        GP2=0;
                                        GP4=1; 
                                        delay(time);
                                        
                                        break;
                                    
                                    default:
                                        GPIO = 0b00000000;
                                        
                                        delay(time);
                                        break;
                                
                                }
                               

                                
                                
                                
                                
                            }
                            
            
            }
        }
        
        GP0=1;
        GP1=0;
        GP2=0;
        GP4=1;
        delay(200);
        main();
        break;
        
    }    
}

void delay(unsigned int tiempo)
{ 
    unsigned int i;
	unsigned int j;

	for(i=0;i<tiempo;i++){
	  for(j=0;j<1275;j++);
    }
}
