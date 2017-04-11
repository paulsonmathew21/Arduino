void setup()
{
  uint8_t * p;
  uint8_t i=1;
  uint8_t q;

  Serial.begin( 115200 );
  
  p = &i;
  
  for(;i<2;i++)
  { 
    Serial.print(16,BIN);  
    //Serial.print(" ");
    //Serial.print( *p, HEX );
    //Serial.println();
    ++p;
  }
  //Serial.println((uint16_t)p,HEX);
}

void loop()
{
}
