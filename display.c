#include <pic14/pic12f675.h>

void delay (unsigned int tiempo); // Funcion delay
void ejecucion();
int contadorg=0;

void main(void) {
    //DECLARACION REGISTROS
    TRISIO = 0b00100000;
    //PINES EN OUTPUT>1,2,3,4,6,7,8
    //PINES EN INPUT>5
    ANSEL = 0; 
    unsigned int time = 100; 

    //PRUEBA PARA LIMITE DE INTENTOS
    //############PREGUNTAR####################

    GPIO = 0b00001001; 
    //delay(time);
    //delay(1000);

        ejecucion();

}

void ejecucion()
{       unsigned int time = 100; 
        unsigned int random = 0; 
        int contador=0;
        
        while ( 1 ) {
        
        //opciones de numeros infinitas entre el 0 y el 9
        for (random = 0; random < 10; random++){
            GP4 = 0;            
            if(GP5 == 1)
                { 
                
                switch (random)
                { 
                    case 1:
                        GPIO = 0b00000001; // Enciende PIN 0
                        delay(time);
                        contador++;
                        break;
                    case 2:
                        GPIO = 0b00000010; // Enciende PIN 1
                        delay(time);
                        contador++;
                        break;
                    case 3:
                        GPIO = 0b00000011; // Enciende PIN 0, 1
                        delay(time);
                        contador++;
                        break;
                    case 4:
                        GPIO = 0b00000100; // Enciende PIN 2
                        delay(time);
                        break;
                    case 5:
                        GPIO = 0b00000101; // Enciende PIN 0, PIN 2
                        delay(time);
                        contador++;
                        break;
                    case 6:
                        GPIO = 0b00000110; // Enciende PIN 2 y 1
                        delay(time);
                        contador++;
                        break;
                    case 7:
                        GPIO = 0b00000111; // Enciende PIN 0, PIN 1, PIN 2 y
                        delay(time);
                        contador++;
                        break;
                    case 8:
                        GPIO = 0b00001000; 
                        delay(time);
                        contador++;
                        break;
                    case 9:
                        GPIO = 0b00001001; 
                        delay(time);
                        contador++;
                        break;
                    default:
                        GPIO = 0b00000000;
                        contador++;
                        delay(time);
                        break;
                
                }
                
                
                
            }  
        
        }
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
