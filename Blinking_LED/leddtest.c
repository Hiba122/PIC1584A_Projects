



void main() {
     TRISB=0x00; //config pin A as output
     PORTB=0x00;    //SET THE PINS LOW
     while(1){
     PORTB.f0=1;
     Delay_ms(250);
     PORTB.f0=0;
     Delay_ms(250);
     /*STATUS&=~(1<<5);
     PORTA=0x00;
     STATUS |=(1<<5);
     PORTA=0x00;
     Delay_ms(2000);*/
     
             
     
     }
}