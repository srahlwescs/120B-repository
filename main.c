int const PA0=11;
int const PA1=12;
void setup()
{
pinMode(PA1, INPUT);
pinMode(PA0,INPUT);
pinMode(PB0,OUTPUT);
}

void loop()
{
if(PA0==0 && PA1==0)
{
digitalWrite(PB0,LOW);
}
else if( PA0==1 && PA1==0)
{
digitalWrite(PB0,HIGH);
}
else if(PA0==0 && PA1==1)
{
digitalWrite(PB0,LOW);
}
else
{
digitalWrite(PB0,LOW);
}
}
