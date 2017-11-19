
void mydelay(int32_t n)
{
  while (n--) {
    __NOP();
  }
}

void setup() {
  // put your setup code here, to run once:
  GPIOA->OUTENSET = 0x1;
  while(1) {  
    mydelay(25000);
    GPIOA->DATAOUT = 0x1; 
    mydelay(500000);
    GPIOA->DATAOUT = 0x0; 
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
