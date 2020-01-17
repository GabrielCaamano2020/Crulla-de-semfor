/***************************************************************
**                                                            ** 
**                          Titol:                            **
**                    Cruïlla de semàfors                     **
**                                                            **
**   Nom: Gabriel Caamaño                    DATA: 17/01/2020 **
****************************************************************/
//************************ INCLUDE ******************************
 

//************************ VARIABLES ****************************
unsigned int temp=100; 
const int v1 = 7;
const int t1 = 8;
const int g1 = 9;
const int v2 = 10;
const int t2 = 11;
const int g2 = 12;


//************************ SETUP ********************************

void setup(){                //configura el final de salida
  pinMode (v1, OUTPUT);
  pinMode (t1, OUTPUT);
  pinMode (g1, OUTPUT);
  pinMode (v2, OUTPUT);
  pinMode (t2, OUTPUT);
  pinMode (g2, OUTPUT);
  
}
//*************************** LOOP ******************************
void  loop() {           //inicia el bucle del programa
  digitalWrite (v1,HIGH);
  digitalWrite (v2,HIGH);
  delay (temp);
  digitalWrite (v1,HIGH);
  digitalWrite (v2,LOW);
  digitalWrite (g2,HIGH);
  delay (4*temp);
  digitalWrite (v1,HIGH);
  digitalWrite (g2,LOW);
  digitalWrite (t2,HIGH);
  delay (temp);
  digitalWrite (v1,HIGH);
  digitalWrite (t2,LOW);
  digitalWrite (v2,HIGH);
  delay (temp);
  digitalWrite (v2,HIGH);
  digitalWrite (v1,LOW);
  digitalWrite (g1,HIGH);
  delay (4*temp);
  digitalWrite (v2,HIGH);
  digitalWrite (g1,LOW);
  digitalWrite (t1,HIGH);
  delay (temp);
  digitalWrite (v2,HIGH);
  digitalWrite (t1,LOW);
  digitalWrite (v1,HIGH);
  delay (temp);
}
//************************* FUNCIONS ****************************
